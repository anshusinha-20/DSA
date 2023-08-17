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

# # CASE STUDY: CALCULATING EXPONENTS
# def exponent_by_iteration(num, pow):
#     prod = 1
#     for i in range(pow):
#         prod *= num
#     return prod
#
# print(exponent_by_iteration(3, 6))
# print(exponent_by_iteration(10, 3))
# print(exponent_by_iteration(17, 10))
#
# print('\n')
#
# def exponent_by_recursion(num, pow):
#     if pow == 0:
#         return 1
#     elif pow == 1:
#         return num
#     elif pow % 2 == 0:  # even power
#         result = exponent_by_recursion(num, pow // 2)
#         return result * result
#     elif pow % 2 != 0:  # odd power
#         result = exponent_by_recursion(num, pow // 2)
#         return result * result * num
#
# print(exponent_by_recursion(3, 6))
# print(exponent_by_recursion(10, 3))
# print(exponent_by_recursion(17, 10))

# ----- #

# # PRACTICE PROJECTS
# # 1. Iteratively calculate the sum of the integer series from 1 to n.
# # This is similar to the factorial() function, except it performs addition
# # instead of multiplication. For example, sumSeries(1) returns 1, sumSeries(2)
# # returns 3 (that is, 1 + 2), sumSeries(3) returns 6 (that is, 1 + 2 + 3),
# # and so on. This function should use a loop instead of recursion.
# # Take a look at the factorialByIteration.py program in this chapter for guidance.
# def sum(n):
#     sum = 0
#     for i in range(n + 1):
#         sum += i
#     return sum
#
# print(sum(3))
# print(sum(10))

# # 2. Write the recursive form of sumSeries(). This function should use recur- sive function
# # calls instead of a loop. Look at the factorialByRecursion.py program in this chapter
# # for guidance.
# def sum(n):
#     if n == 1:
#         return 1
#     else:
#         return n + sum(n - 1)
#
# print(sum(3))
# print(sum(10))

# # 3. Iteratively calculate the sum of the first n powers of 2 in a function named
# # sumPowersOf2(). The powers of 2 are 2, 4, 8, 16, 32, and so on. For example,
# # sumPowersOf2(1) returns 2, sumPowersOf2(2) returns 6 (that is, 2 + 4),
# # sumPowersOf2(3) returns14(that is,2 + 4 + 8),and so on.
# def sum_powers_of_2(num):
#     sum = 0
#     if num == 0:
#         return 1
#     else:
#         for i in range(1, num + 1):
#             sum += 2 ** i
#         return sum
#
# print(sum_powers_of_2(3))

# # 4. Write the recursive form of sumPowersOf2(). This function should
# # use recursive function calls instead of a loop.
# def sum_powers_of_2(num):
#     if num == 0:
#         return 1
#     elif num == 1:
#         return 2
#     else:
#         return (2 ** num) + sum_powers_of_2(num - 1)
#
# print(sum_powers_of_2(2))