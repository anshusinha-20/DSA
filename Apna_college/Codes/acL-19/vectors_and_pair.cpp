#include<iostream>
#include<vector>
using namespace std;

void vectors_in_cpp() {
    // * vector initialisation
    vector<int> v1;

    // * appending elements in a vector
    v1.emplace_back(3);
    v1.emplace_back(2);
    v1.emplace_back(1);

    // // * iterating using loop
    // for (int i = 0; i < v1.size(); i++) {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;

    // // * iterating using iterator
    // vector<int>::iterator i1;
    // for (i1 = v1.begin(); i1 != v1.end(); i1++) {
    //     cout << *i1 << " ";
    // }
    // cout << endl;

    // // * iterating using range based loop
    // for (auto i : v1) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // // * removing an element from the back
    // v1.pop_back();

    // for (int i = 0; i < v1.size(); i++) {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;

    // // * creating a vector with same number of elements
    // vector<int> v2 (3, 50); // 50 , 3 times
    // for (auto i : v2) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // // * swapping vectors
    // swap(v1, v2);
    // for (auto i : v1) {
    //     cout << i << " "; // 50 50 50 
    // }
    // cout << endl;
    // for (auto i : v2) {
    //     cout << i << " "; // 1 2
    // }
    // cout << endl;

    // * sorting a vector
    sort(v1.begin(), v1.end());
    for (auto i : v1) {
        cout << i << " ";
    }
    cout << endl;
}

void pairs_in_cpp(int arr[], int n) {
    // * pair initialisation
    // pair<int, char> p1;
    // p1.first = 1;
    // p1.second = 'a';

    // reduce the array
    vector< pair<int, int> > v1;
    for (int i = 0; i < n; i++) {
        v1.emplace_back(make_pair(arr[i], i));
    }

    sort(v1.begin(), v1.end());

    // for (auto i : v1) {
    //     cout << i.first << "-" << i.second << " ";
    // }
    // cout << endl;

    for (int i = 0; i < n; i++) {
        arr[v1[i].second] = i;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // vectors_in_cpp();

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pairs_in_cpp(arr, n);

    return 0;
}