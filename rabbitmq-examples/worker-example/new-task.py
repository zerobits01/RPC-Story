#!/usr/bin/env python

########################################IMPORTS#####################################

import pika
import sys

########################################VARS########################################
host ='localhost'
port = 5672

message = ' '.join(sys.argv[1:]) or "Hello World!"

cred = pika.PlainCredentials('guest', 'guest')

params = pika.ConnectionParameters(host, port, credentials=cred)

connection = pika.BlockingConnection(params)
channel = connection.channel()

task_queue_name = 'task_queue'

########################################FUNS########################################


def define_task_queue():
    channel.queue_declare(queue=task_queue_name, durable=True)


def send_message():
    channel.basic_publish(
        exchange='',
        routing_key=task_queue_name,
        body=message,
        properties=pika.BasicProperties(
            delivery_mode=2,  # make message persistant
        )
    )

    print(" [x] Sent %r" % message)

def close_connection():
    connection.close()
    

def main():
    define_task_queue()
    send_message()
    close_connection()

########################################MAIN########################################


if __name__ == "__main__":
    main()
