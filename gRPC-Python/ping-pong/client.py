"""The Python implememntation of seans grpc client"""
import ping_pong_pb2_grpc
import ping_pong_pb2
import grpc
import time
import os
import sys
import os.path
sys.path.append(os.path.abspath("."))


def run():
    "The run method, that sends gRPC conformant messsages to the server"
    counter = 0
    pid = os.getpid()
    # creating the channel to conect to and doing RPC
    with grpc.insecure_channel("localhost:9999") as channel:
        # alsways the stubs should be connected to a channel
        stub = ping_pong_pb2_grpc.PingPongServiceStub(channel)
        # pay attention that we have servicer and stub that in client we use the stub
        while True:
            try:
                start = time.time()
                response = stub.ping(ping_pong_pb2.Ping(count=counter))
                counter = response.count
                if counter % 1000 == 0:
                    print(
                        "%.4f : resp=%s : procid=%i"
                        % (time.time() - start, response.count, pid)
                    )
                    # counter = 0
                time.sleep(0.001)
            except KeyboardInterrupt:
                print("KeyboardInterrupt")
                channel.unsubscribe(close)
                exit()


def close(channel):
    "Close the channel"
    channel.close()


if __name__ == "__main__":
    run()
