#!/usr/bin/env python

########################################IMPORTS#####################################

import pika
import time

########################################VARS########################################
host ='localhost'
port = 5672

cred = pika.PlainCredentials('guest', 'guest')

params = pika.ConnectionParameters(host, port, credentials=cred)

connection = pika.BlockingConnection(params)
channel = connection.channel()


########################################FUNS########################################

def callback(ch, method, properties, body):
    print(" [x] Received %r" % body.decode())
    time.sleep(body.count(b'.'))
    print(" [x] Done")
    # channel gives us ability to send back ack
    # here we can choose to send ack base on conditions 
    # ch.basic_ack(delivery_tag=method.delivery_tag)

def main():
    # defining new router
    channel.exchange_declare(exchange='logs', exchange_type='fanout')

    # creating a queue with random name
    result = channel.queue_declare(queue='', exclusive=True)
    queue_name = result.method.queue

    # binding the queue to the router/exchange
    channel.queue_bind(exchange='logs', queue=queue_name)

    print(' [*] Waiting for logs. To exit press CTRL+C')

    # consuming
    channel.basic_consume(
        queue=queue_name, on_message_callback=callback, auto_ack=True)

    channel.start_consuming()
########################################MAIN########################################

if __name__ == "__main__":
    main()