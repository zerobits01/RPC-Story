import complex_pb2

complex_message = complex_pb2.ComplexMessage()


# WRONG!!!
# dummy_one = complex_pb2.DummyMessage()
# dummy_one.id = 1
# dummy_one.name = "test"
# complex_message.one_dummy = dummy_one


complex_message.one_dummy.id = 1
complex_message.one_dummy.name = "test1"

first_dummy = complex_message.multiple_dummy.add()
first_dummy.id = 2
first_dummy.name = "tes2"

complex_message.multiple_dummy.add(id=3, name="tets3")


print(complex_message)