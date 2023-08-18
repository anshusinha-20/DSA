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

# # REVERSING A STRING
# def rev_str(string):
#     if len(string) == 0 or len(string) == 1:
#         return string
#     else:
#         head = string[0]
#         tail = string[1:]
#         return rev_str(tail) + head
#
#
# print(rev_str('hello'))

# ----- #

# # DETECTING PALINDROME
# def check_palindrome(string):
#     if len(string) == 0 or len(string) == 1:
#         return True
#     else:
#         head = string[0]
#         middle = string[1:-1]
#         last = string[-1]
#         return head == last and check_palindrome(middle)
#
#
# print(check_palindrome('thisiswherepytonnotyperehwsisiht'))

# ----- #

# SOLVING THE TOWER OF HANOI
total_disks = int(input('Enter total number of disks: '))

TOWERS = {
    'A': list(reversed(range(1, total_disks + 1))),
    'B': [],
    'C': []
}

# print(TOWERS)

def move_one_disk(start_tower, end_tower):
    disk = TOWERS[start_tower].pop()
    TOWERS[end_tower].append(disk)

def solve_tower_of_hanoi(number_of_disks, start_tower, end_tower, temp_tower):
    if number_of_disks == 1:
        move_one_disk(start_tower, end_tower)
        print(TOWERS)
        return
    else:
        solve_tower_of_hanoi(number_of_disks - 1, start_tower, temp_tower, end_tower)
        move_one_disk(start_tower, end_tower)
        print(TOWERS)
        solve_tower_of_hanoi(number_of_disks - 1, temp_tower, end_tower, start_tower)
        print(TOWERS)
        return


solve_tower_of_hanoi(total_disks, 'A', 'C', 'B')