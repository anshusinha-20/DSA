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


# ----- MAIN ----- #
if __name__ == '__main__':
    find_key(box)
