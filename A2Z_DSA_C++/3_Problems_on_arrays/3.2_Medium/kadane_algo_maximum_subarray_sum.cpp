#include<iostream>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n^3), space complexity - o(1)
// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int maxi = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             int sum = 0;
//             for (int k = i; k <= j; k++) {
//                 sum += arr[k];
//             }
//             maxi = max(sum, maxi);
//         }
//     }

//     cout << maxi << endl;

//     return 0;
// }

// // BETTER APPROACH: time complexity - o(n^2), space complexity - o(1)
// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int maxi = 0;
//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i; j < n; j++) {
//             sum += arr[j];
//             maxi = max(sum, maxi);
//         }
//     }

//     cout << maxi << endl;

//     return 0;
// }

// OPTIMAL APPROACH: time complexity - o(n), space complexity - o(1), kadane's algo
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum < 0) {
            sum = 0;
        }
        else {
            maxi = max(sum, maxi);
        }
    }

    if (maxi <= 0) {
        cout << 0 << endl;
    }
    else {
        cout << maxi << endl;
    }

    return 0;
}