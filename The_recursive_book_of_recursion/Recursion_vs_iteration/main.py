# # THE ITERATIVE FACTORIAL ALGORITHM
# def factorial(num):
#     prod = 1
#     for i in range(1, num + 1):
#         prod *= i
#     return prod
#
# print(factorial(2))

# ----- #

# # THE RECURSIVE FACTORIAL ALGORITHM
# def factorial(num):
#     if num == 1:
#         return 1
#     else:
#         return num * factorial(num - 1)
#
# print(factorial(2))

# ----- #

# THE ITERATIVE FIBONACCI ALGORITHM
def fibonacci(nth_num):
    a, b = 1, 1
    for i in range(1, nth_num):
        a, b = b, a + b
        print(f'a = {a}, b = {b}')
    return b

print(fibonacci(10))