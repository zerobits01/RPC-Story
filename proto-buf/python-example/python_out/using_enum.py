import enum_example_pb2

enum_exmple = enum_example_pb2.EnumMessage()

enum_exmple.id = 10
enum_exmple.day_of_the_week = enum_example_pb2.THURSDAY

# enums are really integers we can change them on demand

print(enum_exmple)

print(enum_exmple.day_of_the_week) # prints 4