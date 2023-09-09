#include<iostream>
#include<set>
#include<vector>
using namespace std;

// OPTIMAL APPROACH: time complexity - o(n1logn + n2logn), space complexity - o(n1 + n2)
void intersection_of_two_sorted_arrays(int arr1[], int arr2[], int n1, int n2, set<int>& inter) {
    for (int i = 0; i < n1; i++) {
        inter.insert(arr1[i]);
    }

    for (int i = 0; i < n2; i++) {
        if (arr2[i] == arr1[i]) {
            inter.insert(arr2[i]);
        }
    }
}

int main() {
    int n1; // number of elements in arr1
    cin >> n1;

    int arr1[n1]; // array 1
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    int n2; // number of elements in arr2
    cin >> n2;

    int arr2[n2]; // array 2
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    set<int> inter; // inter set

    intersection_of_two_sorted_arrays(arr1, arr2, n1, n2, inter);

    for (auto i : inter) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
