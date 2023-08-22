# BINARY SEARCH: FINDING A BOOK IN AN ALPHABETIZED BOOKSHELF
def binary_search(number, arr, left=None, right=None):
    if left == None:
        left = 0
    if right == None:
        right = len(arr)

    print(f'Searching: {arr[left:right]}')

    mid = (left + right) // 2

    if number == arr[mid]:
        return mid
    elif number < arr[mid]:
        return binary_search(number, arr, left, mid - 1)
    elif number > arr[mid]:
        return binary_search(number, arr, mid + 1, right)


print(binary_search(11, [1, 4, 8, 11, 13, 16, 19, 19]))