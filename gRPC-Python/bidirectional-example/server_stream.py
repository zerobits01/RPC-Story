from concurrent import futures

import grpc
import streaming_pb2 as streaming
import streaming_pb2_grpc as stream_grpc


class BidirectionalService(stream_grpc.BidirectionalServicer):

    def GetServerResponse(self, request_iterator, context):
        for message in request_iterator:  # this will wait for requests, doesn't goes more
            yield message  # this is the magic here we do yielding not returning


def serve():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    stream_grpc.add_BidirectionalServicer_to_server(
        BidirectionalService(), server) # this is what we where talking about


    # we can use one server to add multiple servicers 


    server.add_insecure_port('[::]:50051')
    server.start()
    # this is a better method for waiting for listen instead using while True
    server.wait_for_termination()


if __name__ == '__main__':
    serve()


# what if we wanna do one side streaming?
'''
we should use yield on one side and after iterating the whole message
on the other side we do use return
this way one end returns(no stream) and the other yields(streams) 
'''