
import abc

import grpc
# import mock
import pytest
from aio_test_pb2 import HelloRequest
from server import Greeter


class MockResponse:

    def __init__(self, json_data, status_code):
        self.json_data = json_data
        self.status_code = status_code

    def json(self):
        return self.json_data


class InvocationMetadata:

    def __init__(self, k, v):
        self.k = k
        self.v = v

    @property
    def key(self):
        return self.k

    @property
    def value(self):
        return self.v


class Context(grpc.aio.ServicerContext):

    @abc.abstractmethod
    def invocation_metadata():
        return [InvocationMetadata(k='x-auth-clientid', v=['test'])]

    @abc.abstractmethod
    def peer() -> str:
        return 'test : test'


@pytest.fixture(scope='module')
def service():
    return Greeter()


@pytest.fixture(scope='module')
def mock_context():
    return Context  # mock.create_autospec(spec=Context)


# when we use mock_context we have to define it upper using fixtures

@pytest.mark.asyncio
async def test_greeter(service, mock_context, mocker):
    print("test False")
    # mocker.patch('utils.pyt.return_test', return_value=False) # this wont work
    mocker.patch('server.return_test', return_value=False)
    reply = await service.SayHello(HelloRequest(name="zerobits01"), mock_context)
    print(reply)
    assert (
        ('False' in reply.message) == True and 
        ('zerobits01' in reply.message) == True
    )