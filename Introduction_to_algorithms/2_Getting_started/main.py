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


# def insertion_sort2(arr):
#     for i in range(1, len(arr)):
#         key = arr[i]
#         j = i - 1
#         while arr[j] > key and j >= 0:
#             arr[j + 1], arr[j] = arr[j], arr[j + 1]
#             j -= 1
#     return arr
#
#
# print(insertion_sort2([5, 3, 2, 1, 6]))
# print(insertion_sort2([5, 1, 2, 2, 0, 1, 2, -1]))
# print(insertion_sort2([5, 4, 3, 2, 1]))
# print(insertion_sort2([1, 1, 1, 1, 1]))
# print(insertion_sort2([1, 0, 0, 1, 0, 1]))
# print(insertion_sort2([]))
# print(insertion_sort2([31, 41, 59, 26, 41, 58]))

# ----- #

# EXERCISES

# # 2.1-2
# # Consider the procedure SUM-ARRAY on the facing page. It computes the sum of the numbers in array .
# # State a loop invariant for this procedure, and use its initialization, maintenance, and termination properties to
# # show that the SUM-ARRAY procedure returns the sum of the numbers in A[1:n].
# def sum(arr):
#     sum = 0  # initialization
#     if len(arr) <= 1:
#         return arr  # termination
#     for i in arr:
#         sum += i  # maintenance
#     return sum  # termination
#
#
# print(sum([]))
# print(sum([2]))
# print(sum([1, 2, 3, 4, 5]))

# # 2.1-3
# # Rewrite the INSERTION-SORT procedure to sort into monotonically decreasing instead of monotonically increasing order.
# def monotonically_decreasing_insertion_sort(arr):
#     for i in range(1, len(arr)):
#         key = arr[i]
#         j = i - 1
#         while arr[j] < key and j >= 0:
#             arr[j+1], arr[j] = arr[j], arr[j+1]
#             j -= 1
#     return arr
#
#
# print(monotonically_decreasing_insertion_sort([5, 1, 2, 1, 3]))
# print(monotonically_decreasing_insertion_sort([0, 1, -1, -2, 0, 0, 0, 1, 1, 1]))
# print(monotonically_decreasing_insertion_sort([]))
# print(monotonically_decreasing_insertion_sort([0]))
# print(monotonically_decreasing_insertion_sort([2, 1]))

# # 2.1-4
# # Consider the searching problem:
# # Input: A sequence of numbers (a1, a2, ..., an) stored in array A[1:n] and a value x
# # Output: An index i such that x equals A[i] or the special value NIL if x does not appear in A
# # Write pseudocode for linear search, which scans through the array from beginning to end, looking for x. Using a loop
# # invariant, prove that your algorithm is correct. Make sure that your loop invariant fulfils the three necessary
# # properties.
# def linear_search(arr, x):
#     for i in range(len(arr)):
#         if arr[i] == x:
#             return i
#     return 'NIL'
#
#
# print(linear_search([], 1))
# print(linear_search([1, 2, 2, 3, 4, 5], 1))
# print(linear_search([2, 1, 5, 0, 0, -1, 9], 0))

# ----- #

# MERGE SORT (DIVIDE AND CONQUER METHOD)
def merge_divide(arr, first_index, last_index):
    if first_index == last_index:
        return
    else:
        mid_index = (first_index + last_index) // 2
        merge_divide(arr, first_index, mid_index)
        merge_divide(arr, mid_index + 1, last_index)
        merge_conquer(arr, first_index, mid_index, last_index)


def merge_conquer(arr, first_index, mid_index, last_index):
    left_half = arr[first_index:mid_index+1]
    right_half = arr[mid_index+1:last_index + 1]
    i = j = 0
    k = first_index

    while i < len(left_half) and j < len(right_half):
        if left_half[i] <= right_half[j]:
            arr[k] = left_half[i]
            i += 1
        else:
            arr[k] = right_half[j]
            j += 1
        k += 1

    while i < len(left_half):
        arr[k] = left_half[i]
        i += 1
        k += 1

    while j < len(right_half):
        arr[k] = right_half[j]
        j += 1
        k += 1


arr = [5, 2, 1, 0, 4, 3]
merge_divide(arr, 0, len(arr) - 1)
print(arr)