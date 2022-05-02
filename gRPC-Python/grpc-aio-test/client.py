import asyncio
import logging

import grpc
import aio_test_pb2
import aio_test_pb2_grpc


async def run() -> None:
    async with grpc.aio.insecure_channel('localhost:50051') as channel:
        stub = aio_test_pb2_grpc.GreeterStub(channel)
        response = await stub.SayHello(aio_test_pb2.HelloRequest(name="you"))
    print("Greeter client received: " + response.message)


if __name__ == '__main__':
    logging.basicConfig()
    asyncio.run(run())