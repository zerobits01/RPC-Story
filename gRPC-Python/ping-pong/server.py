"""The Python implementation of the GRPC Seans-gRPC server."""

import sys
import os.path
sys.path.append(os.path.abspath("."))

from concurrent import futures
import threading
import time
import grpc
import ping_pong_pb2 # for the datatypes
import ping_pong_pb2_grpc # for using the services

class Listener(ping_pong_pb2_grpc.PingPongServiceServicer):
    """The listener function implemests the rpc call as described in the .proto file
        this is a kinda using polymorphism and rewriting and reloading the methods
    """

    def __init__(self):
        self.counter = 0
        self.last_print_time = time.time()

    def __str__(self):
        return self.__class__.__name__

    def ping(self, request, context):
        self.counter += 1
        if self.counter > 10000:
            print("10000 calls in %3f seconds" % (time.time() - self.last_print_time))
            self.last_print_time = time.time()
            self.counter = 0
        return ping_pong_pb2.Pong(count=request.count + 1)
        # the request is instance of Ping type and we know this so we use the attrib count of it


def serve():
    """The main serve function of the server.
    This opens the socket, and listens for incoming grpc conformant packets"""

    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    ping_pong_pb2_grpc.add_PingPongServiceServicer_to_server(Listener(), server)
    server.add_insecure_port("[::]:9999")
    server.start()
    try:
        while True:
            print("Server Running : threadcount %i" % (threading.active_count()))
            time.sleep(10)
    except KeyboardInterrupt:
        print("KeyboardInterrupt")
        server.stop(0)


if __name__ == "__main__":
    serve()