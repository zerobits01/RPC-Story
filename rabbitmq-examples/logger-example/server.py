#!/usr/bin/env python
########################################IMPORTS#####################################

import pika # this is the python client for connecting to rabbitmq
import sys

########################################VARS########################################

# parameters = pika.URLParameters('amqp://guest:guest@127.0.0.1:5672/%2F')
host = 'localhost'
port = 5672
credentials = pika.PlainCredentials('guest', 'guest') # we can add new users with rabbitmqctl

params = pika.ConnectionParameters(host, port , credentials=credentials) # these are our connection params


########################################FUNCS#######################################

def main():
    connection = pika.BlockingConnection(params) # creating a connection to RBMQ

    channel = connection.channel() # creating a chennel to send data on
    
    # defining the router, mode fanout/broadcast
    channel.exchange_declare(exchange='logs', exchange_type='fanout')
    
    # concat message
    message = ' '.join(sys.argv[1:]) or "info: Hello World!"
    
    # sending message to exhange, message can only be sent to exchanges
    channel.basic_publish(exchange='logs', routing_key='', body=message)

    connection.close()

########################################MAIN########################################

if __name__ == "__main__":
    main()