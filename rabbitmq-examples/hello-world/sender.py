#!/usr/bin/env python
########################################IMPORTS#####################################

import pika # this is the python client for connecting to rabbitmq

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

    channel.queue_declare(queue='hello') # this channal can have one or multiple queues


    # the queue and routing_key should be the same
    channel.basic_publish(exchange='', routing_key='hello', body='Hello World!') # channel publish info, defining routers, routekey and etc

    print(" [x] Sent 'Hello World!'")
    connection.close()

########################################MAIN########################################

if __name__ == "__main__":
    main()