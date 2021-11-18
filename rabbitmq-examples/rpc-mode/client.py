#!/usr/bin/env python

########################################IMPORTS#####################################

import pika
import uuid
import sys

########################################VARS########################################
host ='localhost'
port = 5672


class FibonacciRpcClient(object):

    def __init__(self):

        # creating connection
        cred = pika.PlainCredentials('guest', 'guest')

        params = pika.ConnectionParameters(host, port, credentials=cred)

        self.connection = pika.BlockingConnection(params)

        self.channel = self.connection.channel()
        # end creating connection

        # create a temp queue for a simple or multiple request
        result = self.channel.queue_declare(queue='', exclusive=True)
        self.callback_queue = result.method.queue # getting queue name

        self.channel.basic_consume(
            queue=self.callback_queue, # setting it as a queue to consume
            on_message_callback=self.on_response, # callback for response
            auto_ack=True)

    def on_response(self, ch, method, props, body):
        if self.corr_id == props.correlation_id:
            self.response = body # set response if uuid is for us

    def call(self, n):
        self.response = None
        self.corr_id = str(uuid.uuid4())
        self.channel.basic_publish(
            exchange='', # direct
            routing_key='rpc_queue',
            # we pass the request to the rpc server queue

            # we add response required info as properties
            properties=pika.BasicProperties(
                reply_to=self.callback_queue, # if we check the server we can see reply_to
                correlation_id=self.corr_id,
            ),
            body=str(n))
        while self.response is None:
            self.connection.process_data_events()
        return int(self.response)


fibonacci_rpc = FibonacciRpcClient()

print(" [x] Requesting fib(30)")
response = fibonacci_rpc.call(30)
print(" [.] Got %r" % response)