#!/bin/bash

######################
# AUTHOR: zerobits01
# DATE: 2/15/2021
# DESC: this is a command for converting the proto files to python files
######################

python3 -m grpc_tools.protoc -I./protobufs --python_out=. --grpc_python_out=. ./protobufs/person.proto