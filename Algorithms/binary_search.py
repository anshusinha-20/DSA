"""
Binary search algorithm
"""


def binary_search_1(list, item):
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


# Exercises

"""
1.1 Suppose you have a sorted list of 128 names, and you’re 
searching through it using binary search. What’s the maximum 
number of steps it would take?
"""


def binary_search_2(list, name):
    low = 0
    high = len(list) - 1
    count = 0
    while low <= high:
        mid = round((low + high) / 2)
        guess = list[mid]
        count += 1
        if guess == name:
            return mid, count
        elif guess < name:
            low = mid + 1
        else:
            high = mid - 1
    return None


names_list = [
    'Aaron', 'Abby', 'Abigail', 'Addison', 'Adrian', 'Alice', 'Amelia', 'Anna', 'Anthony', 'Ava',
    'Audrey', 'Austin', 'Avery', 'Bella', 'Benjamin', 'Brandon', 'Brooklyn', 'Caleb', 'Carter',
    'Caroline', 'Charlotte', 'Chloe', 'Christopher', 'Claire', 'Daniel', 'David', 'Dylan', 'Eleanor',
    'Elijah', 'Elizabeth', 'Ella', 'Emily', 'Emma', 'Ethan', 'Evelyn', 'Fiona', 'Frank', 'Gabriel',
    'Gabrielle', 'Gavin', 'George', 'Grace', 'Hailey', 'Harper', 'Hannah', 'Hazel', 'Henry', 'Hunter',
    'Ian', 'Isaac', 'Isabella', 'Isabelle', 'Jackson', 'Jacob', 'James', 'Jessica', 'John', 'Joseph',
    'Julia', 'Justin', 'Katherine', 'Kevin', 'Kyle', 'Liam', 'Lily', 'Logan', 'Lucas', 'Lucy',
    'Madeline', 'Mason', 'Maya', 'Michael', 'Mia', 'Natalie', 'Nathan', 'Nora', 'Oliver', 'Olivia',
    'Owen', 'Patrick', 'Peyton', 'Penelope', 'Peter', 'Quentin', 'Quinn', 'Rachel', 'Robert', 'Ruby',
    'Ryan', 'Samantha', 'Samuel', 'Sarah', 'Sean', 'Sofia', 'Sophia', 'Stella', 'Steven', 'Sydney',
    'Taylor', 'Thomas', 'Timothy', 'Tyler', 'Victoria', 'Vincent', 'Violet', 'Wesley', 'William',
    'Xavier', 'Zeke', 'Zoe'
]

"""
1.2 Suppose you double the size of the list. What’s the maximum 
number of steps now?
"""
new_names_list = names_list * 2

# ----- MAIN ----- #

if __name__ == '__main__':

    """ Uncomment to run specific block of code below 👇🏻"""

    # # binary_search_1()
    # print(binary_search_1(list1, 35))
    # print(binary_search_1(list1, 0))

    # # binary_search_2() with normal names list
    # print(binary_search_2(names_list, 'Xavier'))
    # print(binary_search_2(names_list, 'Aaron'))

    # binary_search_2() with doubled names list
    print(binary_search_2(new_names_list, 'Xavier'))
    print(binary_search_2(new_names_list, 'Aaron'))
