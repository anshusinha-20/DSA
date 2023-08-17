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

# # THE ITERATIVE FIBONACCI ALGORITHM
# def fibonacci(nth_num):
#     a, b = 1, 1
#     for i in range(1, nth_num):
#         a, b = b, a + b
#         print(f'a = {a}, b = {b}')
#     return b
#
# print(fibonacci(10))

# ----- #

# # THE RECURSIVE FIBONACCI ALGORITHM
# def fibonacci(nthNumber):
#     print('fibonacci(%s) called.' % (nthNumber))
#     if nthNumber == 1 or nthNumber == 2:
#         # BASE CASE
#         print('Call to fibonacci(%s) returning 1.' % (nthNumber))
#         return 1
#     else:
#         # RECURSIVE CASE
#         print('Calling fibonacci(%s) and fibonacci(%s).' % (nthNumber - 1, nthNumber - 2))
#         result = fibonacci(nthNumber - 1) + fibonacci(nthNumber - 2)
#         print('Call to fibonacci(%s) returning %s.' % (nthNumber, result))
#         return result
#
# print(fibonacci(10))

# ----- #

# # CONVERTING AN ITERATIVE ALGORITHM INTO A RECURSIVE ALGORITHM
# num = 5
# while num > 0:
#     print('Hello world!')
#     num -= 1
#
# print('\n')
#
# def greet(num):
#     print('Hello world!')
#     num -= 1
#     if num < 1:
#         return None
#     else:
#         greet(num)
#
# greet(5)

# ----- #

# CASE STUDY: CALCULATING EXPONENTS
def exponent_by_iteration(num, pow):
    prod = 1
    for i in range(pow):
        prod *= num
    return prod

print(exponent_by_iteration(3, 6))
print(exponent_by_iteration(10, 3))
print(exponent_by_iteration(17, 10))

print('\n')

def exponent_by_recursion(num, pow):
    if pow == 0:
        return 1
    elif pow == 1:
        return num
    elif pow % 2 == 0:  # even power
        result = exponent_by_iteration(num, pow // 2)
        return result * result
    elif pow % 2 != 0:  # odd power
        result = exponent_by_iteration(num, pow // 2)
        return result * result * num

print(exponent_by_recursion(3, 6))
print(exponent_by_recursion(10, 3))
print(exponent_by_recursion(17, 10))