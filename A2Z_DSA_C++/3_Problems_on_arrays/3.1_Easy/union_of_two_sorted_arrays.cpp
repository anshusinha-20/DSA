#include<iostream>
#include<set>
#include<vector>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n1logn + n2logn) or (n1 + n2) for the worst case, space complexity - o(n1 + n2)
// void union_of_two_sorted_arrays(int arr1[], int arr2[], int n1, int n2, set<int>& u) {
//     for (int i = 0; i < n1; i++) {
//         u.insert(arr1[i]); // o(n1logn)
//     }

//     for (int i = 0; i < n2; i++) {
//         u.insert(arr2[i]); // o(n2logn)
//     }
// }

// int main() {
//     int n1; // number of elements in array 1
//     cin >> n1;

//     int arr1[n1]; // array 1
//     for (int i = 0; i < n1; i ++) {
//         cin >> arr1[i];
//     }

//     int n2; // number of elements in array 2
//     cin >> n2;

//     int arr2[n2]; // array 2
//     for (int i = 0; i < n2; i++) {
//         cin >> arr2[i];
//     }

//     set<int> u; // empty set u

//     union_of_two_sorted_arrays(arr1, arr2, n1, n2, u);

//     for (auto i : u) {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

// OPTIMAL APPROACH
void union_of_two_sorted_arrays(int arr1[], int arr2[], int n1, int n2, vector<int>& u) {
    u.emplace_back(arr1[0]);

    for (int i = 1; i < n1; i++) {
        if (arr1[i] > u.back()) {
            u.emplace_back(arr1[i]);
        }
    }

    for (int i = 0; i < n2; i++) {
        if (arr2[i] > u.back()) {
            u.emplace_back(arr2[i]);
        }
    }
}

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

    vector<int> u; // empty vector u

    union_of_two_sorted_arrays(arr1, arr2, n1, n2, u);

    for (int i = 0; i < u.size(); i++) {
        cout << u[i] << " ";
    }
    cout << endl;

    return 0;
}