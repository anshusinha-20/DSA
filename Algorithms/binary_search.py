"""
Binary search algorithm
"""
def binary_search(list, item):
    low = 0
    high = len(list) - 1
    while low <= high:
        mid = round((low + high) / 2)
        guess = list[mid]
        if guess == item:
            return mid
        elif guess < item:
            low = mid + 1
        else:
            high = mid - 1
    return None

list1 = [1, 2, 35, 69, 101, 10101, 34343]
print(binary_search(list1, 35))
print(binary_search(list1, 0))

