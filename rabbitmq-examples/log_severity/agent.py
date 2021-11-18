#!/usr/bin/env python
# > python.exe .\agent.py warning error
# > python.exe .\agent.py info
########################################IMPORTS#####################################

import pika
import sys
import time

########################################VARS########################################
host ='localhost'
port = 5672

cred = pika.PlainCredentials('guest', 'guest')

params = pika.ConnectionParameters(host, port, credentials=cred)

connection = pika.BlockingConnection(params)
channel = connection.channel()

severities = sys.argv[1:]
if not severities:
    sys.stderr.write("Usage: %s [info] [warning] [error]\n" % sys.argv[0])
    sys.exit(1)
########################################FUNS########################################

def callback(ch, method, properties, body):
    print(" [x] %r:%r" % (method.routing_key, body))

def main():
    # defining new router
    channel.exchange_declare(exchange='direct_logs', exchange_type='direct')


    # creating a queue with random name
    result = channel.queue_declare(queue='', exclusive=True)
    queue_name = result.method.queue

    for severity in severities:
        channel.queue_bind(
            exchange='direct_logs', queue=queue_name, routing_key=severity)


    print(' [*] Waiting for logs. To exit press CTRL+C')

    # consuming
    channel.basic_consume(
        queue=queue_name, on_message_callback=callback, auto_ack=True)

    channel.start_consuming()
########################################MAIN########################################

if __name__ == "__main__":
    main()