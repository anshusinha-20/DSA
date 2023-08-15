# voted = dict()
# voted['tom'] = 1
# voted['jerry'] = 1
# voted['maggie'] = 1
# value = voted.get('tom')
# print(value)
# value = voted.get('sam')
# print(value)

# Create a function which checks if a person has voted or not, if he/she has already voted kick them out and if not then
# add them to the hash table
def add_voter(voters, name):
    if voters.get(name):
        return 'Kick them out!'
    else:
        voters[name] = 1
        return 'Voter added to the table'


# ----- MAIN ----- #
if __name__ == '__main__':

    """ Uncomment to run specific block of code below 👇🏻"""

    # add_voter()
    print(add_voter({'tom': 1, 'sam': 1, 'jerry': 1}, name = 'tom'))