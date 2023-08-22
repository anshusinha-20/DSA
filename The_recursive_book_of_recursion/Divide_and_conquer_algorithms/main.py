# # BINARY SEARCH: FINDING A BOOK IN AN ALPHABETIZED BOOKSHELF
# def binary_search(number, arr, left=None, right=None):
#     if left == None:
#         left = 0
#     if right == None:
#         right = len(arr) - 1
#
#     print(f'Searching: {arr[left:right + 1]}')
#
#     mid = (left + right) // 2
#
#     if number == arr[mid]:
#         return mid
#     elif number < arr[mid]:
#         return binary_search(number, arr, left, mid - 1)
#     elif number > arr[mid]:
#         return binary_search(number, arr, mid + 1, right)
#
#
# print(binary_search(11, [1, 4, 8, 11, 13, 16, 19, 19]))

# ----- #

# QUICKSORT: SPLITTING AN UNSORTED PILE OF BOOKS INTO SORTED PILES
def quicksort(arr):
    if len(arr) <= 1:
        return arr

    pivot = arr[len(arr) // 2]
    left = [i for i in arr if i < pivot]
    middle = [i for i in arr if i == pivot]
    right = [i for i in arr if i > pivot]

    return quicksort(left) + middle + quicksort(right)


array = [0, 7, 6, 3, 1, 2, 5, 4]
print(quicksort(array))