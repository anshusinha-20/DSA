'''
Greedy algorithm
'''
def find_radio_stations(states_needed):
    while states_needed:
        # best station convering the most states
        best_station = None
        # set of covered states
        states_covered = set()
        for station, states_covered_by_station in stations.items():
            covered = states_covered_by_station & states_needed
            if len(covered) > len(states_covered):
                states_covered = covered
                best_station = station
        states_needed -= states_covered
        final_stations.add(best_station)
    return final_stations


# ----- MAIN ----- #
if __name__ == '__main__':

    """ Uncomment to run specific block of code below 👇🏻"""        
    # set of all the stations
    states_needed = set(['mt', 'wa', 'or', 'id', 'nv', 'ut', 'ca', 'az'])
    # print(states_needed)

    # hash tables containing stations covering specific states
    stations = {}
    stations['kone'] = set(['id', 'nv', 'ut']) 
    stations['ktwo'] = set(['wa', 'id', 'mt'])
    stations['kthree'] = set(['or', 'nv', 'ca'])
    stations['kfour'] = set(['nv', 'ut']) 
    stations['kfive'] = set(['ca', 'az'])
    # print(stations.items())

    # set of final stations
    final_stations = set()
    
    print(find_radio_stations(states_needed))