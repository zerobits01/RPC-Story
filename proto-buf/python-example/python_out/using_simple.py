import simple_pb2

'''
we shouldnt edit the proto buf created files
using reflection is the most important option in python

it is not like other languages like java and golang to create Classes

Descriptor is the metadata

the reflection is using dictionary to generate the type

'''
message = simple_pb2.SimpleMessage() # initiating an instance from SimpleMessage class
message.id = 10
message.is_simple = True
message.sample_list.append(1)
message.sample_list.append(2)
message.sample_list.append(3)
sample_list = message.sample_list

sample_list.append(10)

print(message)

with open("simple.bin", "wb") as f:
    bytesString = message.SerializeToString()
    f.write(bytesString)

with open("simple.bin", "rb") as f:
    simple_read = simple_pb2.SimpleMessage().FromString(f.read())
    print(simple_read)