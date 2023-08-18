# # SUMMING NUMBERS IN AN ARRAY
# def sum_arr(arr):
#     if len(arr) == 0:
#         return 0
#     else:
#         head = arr[0]
#         tail = arr[1:]
#         return head + sum_arr(tail)
#
#
# num_arr = [1, 2, 3, 4, 5]
# print(sum_arr(num_arr))

# ----- #

# REVERSING A STRING
def rev_str(string):
    if len(string) == 0 or len(string) == 1:
        return string
    else:
        head = string[0]
        tail = string[1:]
        return rev_str(tail) + head


print(rev_str('hello'))