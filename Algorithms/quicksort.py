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

# Exercises
# 4.2 Write a recursive function to count the number of items in a list.


def count_items(arr):
    if not arr:
        return 0
    else:
        return 1 + count_items(arr[1:])


# 4.4 Remember binary search from chapter 1? It’s a divide-and-conquer algorithm, too.
#     Can you come up with the base case and recursive case for binary search?
def binary_search_rec(arr, item, low, high):
    if low > high:
        return None
    
    mid = (low + high) // 2
    guess = arr[mid]
    
    if guess == item:
        return mid
    elif guess < item:
        return binary_search_rec(arr, item, mid + 1, high)
    else:
        return binary_search_rec(arr, item, low, mid - 1)


# ----- MAIN ----- #
if __name__ == '__main__':

    """ Uncomment to run specific block of code below 👇🏻"""

    # # arr_sum()
    # print(arr_sum([1, 2, 3, 4, 5]))

    # # rec_sum()
    # print(rec_sum([1, 2, 3, 4, 5]))

    # # count_items()
    # print(count_items([1, 2, 3, 4, 5]))

    # # binary_search_rec()
    # arr = [1, 2, 3, 4, 5]
    # print(binary_search_rec(arr, item = 3, low = 0, high = len(arr) - 1))