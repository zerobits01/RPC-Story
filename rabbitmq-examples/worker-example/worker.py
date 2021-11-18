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

task_queue_name = 'task_queue'

########################################FUNS########################################

def callback(ch, method, properties, body):
    print(" [x] Received %r" % body.decode())
    time.sleep(body.count(b'.'))
    print(" [x] Done")
    # channel gives us ability to send back ack
    # here we can choose to send ack base on conditions 
    ch.basic_ack(delivery_tag=method.delivery_tag)

def main():
    channel.queue_declare(queue=task_queue_name, durable=True)
    print(' [*] Waiting for messages. To exit press CTRL+C')

    channel.basic_qos(prefetch_count=1)
    channel.basic_consume(queue=task_queue_name, on_message_callback=callback)

    channel.start_consuming()
    
########################################MAIN########################################

if __name__ == "__main__":
    main()