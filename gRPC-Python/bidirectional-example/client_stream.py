# for python2 code
# from __future__ import print_function
# The title says it all -- this PEP proposes a new print() 
# builtin that replaces the print statement and suggests a specific signature for the new function.

import time

import grpc
import streaming_pb2 as streaming
import streaming_pb2_grpc as stream_grpc



def make_message(message):
    return streaming.Message(
        message=message
    )


def generate_messages():
    messages = [
        make_message("First message"),
        make_message("Second message"),
        make_message("Third message"),
        make_message("Fourth message"),
        make_message("Fifth message"),
    ]
    for msg in messages:
        print("Hello Server Sending you the %s" % msg.message)
        time.sleep(1)
        yield msg # here is for streaming
        # we can also read a file in a stream which can be a binary file and 
        # stream it instead sending the data in one request


def send_message(stub):
    responses = stub.GetServerResponse(generate_messages())
    for response in responses:
        print("Hello from the server received your %s" % response.message)


def run():
    with grpc.insecure_channel('localhost:50051') as channel:
        stub = stream_grpc.BidirectionalStub(channel)
        send_message(stub)


if __name__ == '__main__':
    run()
