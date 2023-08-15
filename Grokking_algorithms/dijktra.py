'''
Djikstra's algorithm
'''
def dijktra_algo():
    # function to find the lowest cost node
    def find_lowest_cost_node(costs):
        lowest_cost = float('inf')
        lowest_cost_node = None
        for node in costs:
            cost = costs[node]
            if cost < lowest_cost and node not in processed_nodes:
                lowest_cost = cost
                lowest_cost_node = node
        return lowest_cost_node

    node = find_lowest_cost_node(costs)
    while node is not None:
        cost = costs[node]
        neigbours = graph[node]
        for neighbour in neigbours:
            new_cost = cost + costs[neighbour]
            if new_cost < costs[neighbour]:
                costs[neighbour] = new_cost
                parents[neighbour] = node
        processed_nodes.append(node)
        node = find_lowest_cost_node(costs)

    return processed_nodes


# ----- MAIN ----- #
if __name__ == '__main__':

    """ Uncomment to run specific block of code below 👇🏻"""

    # # ----- Graph table ----- #
    # # start node
    # graph = {}
    # graph['start'] = {}
    # graph['start']['A'], graph['start']['B'] = 6, 2
    # # print(graph['start'].values())
    # # print(graph['start']['A'])

    # # A and B node
    # graph['A'] = {}
    # graph['B'] = {}
    # graph['A']['fin'], graph['B']['A'], graph['B']['fin'] = 1, 3, 5
    # # print(graph)

    # # finish node
    # graph['finish'] = {}
    # # print(graph)

    # # ----- Costs table ----- #
    # costs = {}
    # infinity = float('inf')
    # costs['A'], costs['B'], costs['fin'] = 6, 2, infinity
    # # print(costs)

    # # ----- Parents table ----- #
    # parents = {}
    # parents['A'], parents['B'], parents['fin'] = 'start', 'start', None
    # # print(parents)

    # # Array to keep track of the processed nodes
    # processed_nodes = []

    # print(dijktra_algo())