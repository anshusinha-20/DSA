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

# # STACK OVERFLOW
# def endless():
#     endless()
# endless()

# ----- #

# # BASE CASE AND RECURSIVE CASE
# def factorial(n):
#     if n == 0:
#         print('base case arrived')
#         return None
#     else:
#         print('recursive case running')
#         return n * factorial(n - 1)
#
# print(factorial(3))

# ----- #

# # CODE BEFORE AND AFTER THE RECURSIVE CALL
# def count_down_and_up(num, call_stack):
#     print(num)
#     if num == 0:
#         print('reached the base case')
#         return None
#     else:
#         count_down_and_up(num - 1, call_stack + 1)
#         print(f'call stack: {call_stack}: {num}')
#         return None
#
# count_down_and_up(3, 1)