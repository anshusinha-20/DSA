#include<map>
#include<limits>
vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int, int> mp;
    for (int i = 0; i < v.size(); i += 1) { // mapping the element with their frequencies
        mp[v[i]] += 1;
    }

    int min_el = numeric_limits<int>::max(); // getting the max possible value, such that if a number is min than 
                                             //this than min gets updated to the lower value
    int max_el = numeric_limits<int>::min(); // getting the min possible value, such that if a number is max than
                                            // this than max gets updated to the higher value

    vector<int> result(2);
                      

    for (auto i : mp) {
        if (i.second < min_el) {
            min_el = i.second;
            result[1] = i.first;
        }
        if (i.second > max_el) {
            max_el = i.second;
            result[0] = i.first;
        }
    }

    return result;
}