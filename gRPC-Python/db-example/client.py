import person_pb2_grpc
import person_pb2
import grpc
import sys
import os.path
sys.path.append(os.path.abspath("."))


def run():
    with grpc.insecure_channel("localhost:8000") as channel:
        stub = person_pb2_grpc.DBHandlerStub(channel)
        person = person_pb2.Person()
        person.id = 1
        person.fullname.fname = "test-fname"
        person.fullname.lname = "test-lname"
        person.addrs.add(city="test", addr="street1", postal_Code="1234")
        print(person)
        response = stub.create_user(person)
        print(response.code, response.message)


if __name__ == "__main__":
    run()
