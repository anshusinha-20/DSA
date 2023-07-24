"""
Recursion algorithm
"""


def find_key(box):
    for item in box:
        if item == 'key':
            print('Found the key!')
            break
        elif isinstance(item, list):
            find_key(item)


box = [
    ['box', ['box', 'box', 'box'], 'box', ['box', 'box', ['box']]],
    ['box', 'box', 'box', ['box'], ['box', ['box', ['box', ['box']]]]],
    ['box', ['box', ['box', ['box', ['box', ['key']]]]]],
    ['box', 'box'],
    ['box', 'box'],
]

def factorial(num):
    if num == 1:
        return 1
    else:
        return num * factorial(num - 1)


# ----- MAIN ----- #
if __name__ == '__main__':

    """ Uncomment to run specific block of code below 👇🏻"""

    # # find_key()
    # find_key(box)

    # factorial()
    print(factorial(5))
