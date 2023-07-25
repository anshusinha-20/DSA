# simple prograam to find sum of numbers in an array
def arr_sum(arr):
    sum = 0
    for num in arr:
        sum += num
    return sum

# solving the arr_sum() using divide and conquer and applying recursive function
def rec_sum(arr):
    sum = 0
    if not arr:
        return 0
    else:
        return arr[0] + rec_sum(arr[1:])


# ----- MAIN ----- #
if __name__ == '__main__':

    """ Uncomment to run specific block of code below 👇🏻"""

    # # arr_sum()
    # print(arr_sum([1, 2, 3, 4, 5]))

    # # rec_sum()
    # print(rec_sum([1, 2, 3, 4, 5]))