
def return_test(value):
    if type(value) is not bool:
        raise ValueError("input should be boolean")
    return value