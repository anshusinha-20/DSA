# # FUNCTION CALL
# def a():
#     print('a() was called')
#     b()
#     print('a() is returning')
#
# def b():
#     print('b() was called')
#     c()
#     print('b() is returning')
#
# def c():
#     print('c() was called')
#     print('c() is returning')
#
# a()

# ----- #

# # STACK
# num_stack = []
# num_stack.append('5')
# print(','.join(num_stack))
# num_stack.append('3')
# print(','.join(num_stack))
# num_stack.append('4')
# print(','.join(num_stack))
# num_stack.pop()
# print(','.join(num_stack))

# ----- #

# # CALL STACK
# def a():
#     name = 'alex'
#     print(name)
#     b()
#     print(name)
#
# def b():
#     name = 'chris'
#     print(name)
#     c()
#     print(name)
#
# def c():
#     name = 'john'
#     print(name)
#
# a()

# ----- #

# STACK OVERFLOW
def endless():
    endless()
endless()