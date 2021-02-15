#!/bin/bash

python3 -m grpc_tools.protoc -I./protos --python_out=. --grpc_python_out=. ./protos/example.proto

# here we dont use the protoc itself we gonna use gRPC