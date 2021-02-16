#!/bin/bash

##############################################################
# author: zerobits01
# date:   2/16/2021
# purpose:generating grpc python files
##############################################################

python3 -m grpc_tools.protoc --proto_path=protos  ./protos/streaming.proto --python_out=. --grpc_python_out=.
