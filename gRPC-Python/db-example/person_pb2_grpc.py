# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

import person_pb2 as person__pb2


class DBHandlerStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.create_user = channel.unary_unary(
                '/DBHandler/create_user',
                request_serializer=person__pb2.Person.SerializeToString,
                response_deserializer=person__pb2.Response.FromString,
                )


class DBHandlerServicer(object):
    """Missing associated documentation comment in .proto file."""

    def create_user(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_DBHandlerServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'create_user': grpc.unary_unary_rpc_method_handler(
                    servicer.create_user,
                    request_deserializer=person__pb2.Person.FromString,
                    response_serializer=person__pb2.Response.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'DBHandler', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class DBHandler(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def create_user(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/DBHandler/create_user',
            person__pb2.Person.SerializeToString,
            person__pb2.Response.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
