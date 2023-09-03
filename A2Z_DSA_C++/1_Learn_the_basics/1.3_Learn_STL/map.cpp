#include<iostream>
#include<map>
using namespace std;

void maps() { // a maps stores elements in the form of key value pairs in sorted order of key and the keys are unique
    map<int, int> mp; // a map mp with key as int and value as int
    map<pair<int, int>, int> mp2; // a map mp2 with key as pair<int, int> and value as int

    mp[1] = 2; // {1, 2}
    mp.emplace(3, 1); // {{1, 2}, {3, 1}}
    mp.insert({4, 5}); // {{1, 2}, {3, 1}, {4, 5}}

    for (auto i : mp) {
        cout << i.first << " " << i.second << endl; // iterating through the map with i.first storing the key and i.second storing the value
    }

    cout << mp[1] << endl; // 2
    cout << mp[10] << endl; // 0

    // erase, swap, size and empty functions are same as vector
}

int main() {
    maps();

    return 0;
}