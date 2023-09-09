#include<iostream>
#include<set>
using namespace std;

void union_of_two_sorted_arrays(int arr1[], int arr2[], int n1, int n2, set<int>& u) {
    for (int i = 0; i < n1; i++) {
        u.insert(arr1[i]);
    }

    for (int i = 0; i < n2; i++) {
        u.insert(arr2[i]);
    }
}

// BRUTE APPROACH
int main() {
    int n1; // number of elements in array 1
    cin >> n1;

    int arr1[n1]; // array 1
    for (int i = 0; i < n1; i ++) {
        cin >> arr1[i];
    }

    int n2; // number of elements in array 2
    cin >> n2;

    int arr2[n2]; // array 2
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    set<int> u; // empty set u

    union_of_two_sorted_arrays(arr1, arr2, n1, n2, u);

    for (auto i : u) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}