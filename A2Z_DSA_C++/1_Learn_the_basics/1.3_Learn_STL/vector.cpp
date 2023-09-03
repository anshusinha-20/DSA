#include<iostream>
#include<vector>
using namespace std;

void vectors() {
    // INITIALIZING VECTORS
    vector<int> v1; // initialized a vector v1 of integer data type
    v1.push_back(1); // appends 1 in v1
    v1.emplace_back(2); // appends 2 in v1, specifically at the end, but emplace_back is faster than push_back

    vector<pair<int, int>> vp1; // initialized a vector vp1 of pair type
    vp1.push_back({1, 2}); // appends a pair at the end of the vector vp1
    vp1.emplace_back(1, 2); // appends a pair at the end of the vector vp1

    vector<int> v2(5); // initialized a vector of integer data type with 5 uninitialized elements
    vector<int> v3(5, 100); // initialized a vector of integer data type with 5 initialized elements
    vector<int> v4(v3); // created a copy of v3 in v4 
    vector<int> v5 = {1, 2, 3, 4, 5}; // created a vector v5 with 5 elements

    // ACCESSING ELEMENTS IN VECTORS
    vector<int>::iterator i = v3.begin(); // initialized an iterator i to iterate through vector v3
    i += 1; // incrementing the value of i by 1
    // cout << *(i) << endl; // outputs the second value of vector v3, *(i) indicates to print the element and if it was only 'i' than the memory adress would have been printed

    vector<int>::iterator j = v5.end(); // points to the memory address after the last element

    // ITERATING THROUGH VECTORS
    // for (vector<int>::iterator k = v5.begin(); k != v5.end(); k += 1) { // explicitly declaring the data type of 'i'
    //     cout << *k << endl;
    // }

    // for (auto i = v5.begin(); i != v5.end(); i += 1) { // the data type is automatically assigned to 'i'
    //     cout << *i << endl;
    // }

    // for (auto i:v5) { // kind of for each loop 
    //     cout << i << endl;
    // }

    // DELETION IN VECTORS
    // v5.erase(v5.begin() + 2, v5.begin() + 4); // will delete elements starting from 2th index till 4th index - 1 i.e, 3rd index, so 2nd and 3rd index elements will be deleted
    // for (auto i:v5) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // INSERTION IN VECTORS
    // v5.insert(v5.begin() + 1, 2, 10); // inserts 10 at index 1st and 2nd
    // for (auto i : v5) {
    //     cout << i << " ";
    // } 
    // cout << endl;
}

int main() {
    vectors();

    return 0;
}