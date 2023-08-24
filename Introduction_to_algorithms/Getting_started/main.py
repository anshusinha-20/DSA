# INSERTION SORT
# def insertion_sort1(arr):
#     for i in range(1, len(arr)):
#         key = arr[i]
#         j = i - 1
#         while arr[j] > key and j >= 0:
#             arr[j + 1] = arr[j]
#             j -= 1
#         arr[j + 1] = key
#     return arr
#
#
# print(insertion_sort1([5, 3, 2, 1, 6]))
# print(insertion_sort1([5, 1, 2, 2, 0, 1, 2, -1]))


def insertion_sort2(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while arr[j] > key and j >= 0:
            arr[j + 1], arr[j] = arr[j], arr[j + 1]
            j -= 1
    return arr


print(insertion_sort2([5, 3, 2, 1, 6]))
print(insertion_sort2([5, 1, 2, 2, 0, 1, 2, -1]))
print(insertion_sort2([5, 4, 3, 2, 1]))
print(insertion_sort2([1, 1, 1, 1, 1]))
print(insertion_sort2([1, 0, 0, 1, 0, 1]))
print(insertion_sort2([]))