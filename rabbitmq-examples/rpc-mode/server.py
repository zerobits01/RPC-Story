#!/usr/bin/env python

########################################IMPORTS#####################################

import pika
import sys

########################################VARS########################################
host ='localhost'
port = 5672

message = ' '.join(sys.argv[1:]) or "Hello World!"

# creating con
cred = pika.PlainCredentials('guest', 'guest')

params = pika.ConnectionParameters(host, port, credentials=cred)

connection = pika.BlockingConnection(params)

channel = connection.channel()
# creating con end

# creating related queue
channel.queue_declare(queue='rpc_queue')


# define fibonacci function
def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)



def on_request(ch, method, props, body):
    # this is a callback for the messages
    n = int(body)

    print(" [.] fib(%s)" % n)
    response = fib(n)

    ch.basic_publish(exchange='', # its the direct default mode
                     
                     # this reply_to is the queue name which has been set in client as prop
                     routing_key=props.reply_to, # this is the usage of props this gives us the reply_to option
                     # we can define properties for our messages which we publish
                     properties=pika.BasicProperties(correlation_id = \
                                                         props.correlation_id), # this will gives us the correlation for response to
                     body=str(response))
    ch.basic_ack(delivery_tag=method.delivery_tag)

channel.basic_qos(prefetch_count=1) # for multiple server runs
channel.basic_consume(queue='rpc_queue', on_message_callback=on_request)

# the server is a simple consumer

print(" [x] Awaiting RPC requests")
channel.start_consuming()