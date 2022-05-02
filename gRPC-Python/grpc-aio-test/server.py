import asyncio
from grpc import aio

import aio_test_pb2
import aio_test_pb2_grpc

from utils.pyt import return_test


class Greeter(aio_test_pb2_grpc.GreeterServicer):

    async def SayHello(self, request, context):
        print(f"got a new message, raw format of request is : {request}")
        print(f"got a new message, raw format of context is : {context}")
        if return_test(True):
            return aio_test_pb2.HelloReply(message='Hello True, %s!' % request.name)
        else:
            return aio_test_pb2.HelloReply(message='Hello False, %s!' % request.name)


async def serve():
    server = aio.server()
    aio_test_pb2_grpc.add_GreeterServicer_to_server(Greeter(), server)
    listen_addr = '[::]:50051'
    server.add_insecure_port(listen_addr)
    await server.start()
    await server.wait_for_termination()

if __name__ == '__main__':
    asyncio.run(serve())