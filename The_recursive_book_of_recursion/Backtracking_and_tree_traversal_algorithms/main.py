# A TREE DATA STRUCTURE
root = {
    'data': 'A',
    'children': []
}
node2 = {
    'data': 'B',
    'children': []
}
node3 = {
    'data': 'C',
    'children': []
}
node4 = {
    'data': 'D',
    'children': []
}
node5 = {
    'data': 'E',
    'children': []
}
node6 = {
    'data': 'F',
    'children': []
}
node7 = {
    'data': 'G',
    'children': []
}
node8 = {
    'data': 'H',
    'children': []
}

root['children'] = [node2, node3]
node2['children'] = [node4]
node3['children'] = [node5, node6]
node5['children'] = [node7, node8]
#
# print(root)

# # TRAVERSING A TREE
# print(root['children'][1]['data'])
# print(root['children'][1]['children'][0]['data'])

# # PREORDER TREE TRAVERSAL
# def preorder_traverse(node):
#     print(node['data'], end=' ')
#     # recursive case
#     if len(node['children']) > 0:
#         for child in node['children']:
#             preorder_traverse(child)
#     # base case
#     return
#
#
# preorder_traverse(root)

# # POSTORDER TREE TRAVERSAL
# def postorder_traverse(node):
#     # recursive case
#     for child in node['children']:
#         postorder_traverse(child)
#     print(node['data'], end=' ')
#     # base case
#     return
#
#
# postorder_traverse(root)

# # INORDER TREE TRAVERSAL
# def inorder_traverse(node):
#     # recursive case 1
#     if len(node['children']) >= 1:
#         inorder_traverse(node['children'][0])  # traverse the left child
#     print(node['data'], end=' ')
#     # recursive case 2
#     if len(node['children']) >= 2:
#         inorder_traverse(node['children'][1])  # traverse the right child
#     # base case
#     return
#
#
# inorder_traverse(root)

# ----- #

# # FINDING EIGHT-LETTER NAMES IN A TREE
#
# root = {
#     'data': 'Alice',
#     'children': []
# }
# nodeB = {
#     'data': 'Bob',
#     'children': []
# }
# nodeC = {
#     'data': 'Caroline',
#     'children': []
# }
# nodeD = {
#     'data': 'Darya',
#     'children': []
# }
# nodeE = {
#     'data': 'Eve',
#     'children': []
# }
# nodeF = {
#     'data': 'Fred',
#     'children': []
# }
# nodeG = {
#     'data': 'Gonzalo',
#     'children': []
# }
# nodeH = {
#     'data': 'Hadassah',
#     'children': []
# }
#
# root['children'] = [nodeB, nodeC]
# nodeB['children'] = [nodeD]
# nodeC['children'] = [nodeE, nodeF]
# nodeE['children'] = [nodeG, nodeH]
#
# print(root)
#
# def preorder_find_eight_letter_word(node):
#     if len(node['data']) == 8:
#         print(node['data'], end=' ')
#     if len(node['children']) > 0:
#         for child in node['children']:
#             preorder_find_eight_letter_word(child)
#     return
#
#
# preorder_find_eight_letter_word(root)
#
# print('\n')
#
# def postorder_find_eight_letter_word(node):
#     for child in node['children']:
#         postorder_find_eight_letter_word(child)
#     if len(node['data']) == 8:
#         print(node['data'], end=' ')
#     return
#
#
# postorder_find_eight_letter_word(root)
#
# print('\n')
#
# def inorder_find_eight_letter_word(node):
#     if len(node['children']) >= 1:
#         inorder_find_eight_letter_word(node['children'][0])
#     if len(node['data']) == 8:
#         print(node['data'], end=' ')
#     if len(node['children']) >= 2:
#         inorder_find_eight_letter_word(node['children'][1])
#     return
#
#
# inorder_find_eight_letter_word(root)
#
# print('\n')

# ----- #

# GETTING THE MAXIMUM TREE DEPTH
def get_depth(node):
    if len(node['children']) == 0:
        return 0
    else:
        max_depth = 0
        for child in node['children']:
            child_depth = get_depth(child)
            if child_depth > max_depth:
                max_depth = child_depth
        return max_depth + 1


print(f'Depth of tree is: {get_depth(root)}')