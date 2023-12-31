"""
Selection sort algorithm
"""
def find_smallest_index(arr):
    smallest_num = arr[0]
    smallest_index = 0
    for i in range(1, len(arr)):
        if arr[i] < smallest_num:
            smallest_num = arr[i]
            smallest_index = i
    return smallest_index

def selection_sort(arr):
    new_arr = []
    for i in range(len(arr)):
        smallest_index = find_smallest_index(arr)
        new_arr.append(arr.pop(smallest_index))
    return new_arr

# ----- MAIN ----- #
if __name__ == '__main__':
    print(selection_sort([5, 3, 6, 2, 10]))
    print(selection_sort([43, 3, 0, 453, 43, 23]))
