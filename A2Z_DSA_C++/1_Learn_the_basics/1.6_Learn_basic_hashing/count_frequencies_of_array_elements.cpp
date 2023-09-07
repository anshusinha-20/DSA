// // HASHING APPROACH
// vector<int> countFrequency(int n, int x, vector<int> &nums){
//     // Write your code here.
//     int hash[1000000] = {0};
//     for (int i = 0; i < n; i += 1) {
//         hash[nums[i]] += 1;
//     }

//     vector<int> result;
//     for (int i = 1; i <= n; i += 1) {
//         result.emplace_back(hash[i]);
//     }

//     return result;
// }

// MAP APPROACH
#include<map>
vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    map<int, int> mp;
    for (int i = 0; i < n; i += 1) {
        mp[nums[i]] += 1;
    }

    vector<int> result;
    for (int i = 1; i <= n; i += 1) {
        result.emplace_back(mp[i]);
    }

    return result;
}