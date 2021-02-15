import sys
import os.path
sys.path.append(os.path.abspath("."))

from concurrent import futures
import threading
import grpc
import person_pb2_grpc
import person_pb2

import sqlite3


class RpcDBHandlerServicer(person_pb2_grpc.DBHandlerServicer):
        
    def __str__(self):
        return self.__class__.__name__


    def create_user(self, request, context):

        try:
            # creating the database connection
            conn = sqlite3.connect('example.db')
            c = conn.cursor()
            # c.execute('''CREATE TABLE person
            #                     (id real, name text, address text)''')
            print(request)
            id_1 = request.id
            name = request.fullname.fname + " " + request.fullname.lname
            address = request.addrs[0].city + " " + request.addrs[0].addr
            # Insert a row of data
            c.execute(f"INSERT INTO person VALUES ('{id_1}','{name}','{address}')")
            # Save (commit) the changes
            conn.commit()

            print("user added")
            conn.close()
        except Exception as e:
            print(20*"#")
            print(e)
            print(20*"#")
        
        return person_pb2.Response(code=200, message="nothing")
        

def server():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    person_pb2_grpc.add_DBHandlerServicer_to_server(RpcDBHandlerServicer(), server) # pay attention () after Rpc handler
    server.add_insecure_port("[::]:8000")
    server.start()
    
    try:
        while True:
            pass
    except Exception as e:
        print(e)
        server.stop(0)



if __name__ == "__main__":
    server()