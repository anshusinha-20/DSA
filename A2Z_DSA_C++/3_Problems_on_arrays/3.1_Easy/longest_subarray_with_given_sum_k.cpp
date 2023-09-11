#include<iostream>
using namespace std;

// // BRUTE APPROACH: time complexity(n^3), space complexity - o(n)
// int main() {
//     int n; // number of elements in the array
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) { // filling the array with the elements
//         cin >> arr[i];
//     }

//     int k; // sum k
//     cin >> k;

//     int length = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             int sum = 0;
//             for (int l = i; l <= j; l++) {
//                 sum += arr[l];
//             }
//             if (sum == k) {
//                 length = max(length, j-i+1);
//             }
//         }
//     }

//     cout << length << endl;

//     return 0;
// }

// BETTER APPROACH: time complexity - o(n^2), space complexity - o(1)
int main() {
    int n; // number of elements in the array
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) { // filling the array with the elements
        cin >> arr[i];
    }

    int k; // sum k
    cin >> k;

    int length = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                length = max(length, j-i+1);
            }
        }
    }

    cout << length << endl;

    return 0;
}