#!/usr/bin/env python

########################################IMPORTS#####################################
import pika
import sys
import os


########################################VARS########################################

credentials = pika.PlainCredentials('guest', 'guest')
host = 'localhost'
port = 5672
# web-ui is 15672, access for python agents are 5672
params = pika.ConnectionParameters(host, port, credentials=credentials)
queue = 'hello'

########################################FUNCS#######################################

def callback(ch, method, properties, body):
    # this gonna check messages asyncly
    print(" [x] Received %r" % body)

def main():
    connection = pika.BlockingConnection(params) # creating the connection
    channel = connection.channel() # creating a channel to use the RBMQ

    channel.queue_declare(queue=queue) # declaring a queue or using an existing one

    # here auto ack is true, but sometimes we need to send back the ack in a conditional situation
    channel.basic_consume(queue=queue, on_message_callback=callback, auto_ack=True) # creating a consumer

    print(' [*] Waiting for messages. To exit press CTRL+C')
    channel.start_consuming() # start consuming, this is an async checker

########################################MAIN########################################

if __name__ == '__main__':
    try:
        main()
    except KeyboardInterrupt:
        print('Interrupted')
        try:
            sys.exit(0)
        except SystemExit:
            os._exit(0)