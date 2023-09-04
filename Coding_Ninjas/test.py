def sumOfAllDivisors(n):
    sum = 0
    if n == 0:
        return 0
    else:
        for i in range(n, 0, -1):
            if n % i == 0:
                sum += i
        return sum + sumOfAllDivisors(n - 1)

print(sumOfAllDivisors(5))