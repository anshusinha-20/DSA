#include<iostream>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n^2), space complexity - o(1)
// int main() {
//     int n;
//     cin >> n;

//     int arr[n-1];
//     cout << "Enter " << n-1 << " inclusive numbers between 1 and " << n << ": ";
//     for (int i = 0; i < n - 1; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 1; i <= n; i++) {
//         int flag = 0;
//         for (int j = 0; j < n-1; j++) {
//             if (arr[j] == i) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) {
//             cout << i << endl;
//             break;
//         }
//     }

//     return 0;
// }

// // BETTER APPROACH: time complexity - o(n), space complexity - o(n)
// int main() {
//     int n;
//     cin >> n;

//     int arr[n-1];
//     cout << "Enter " << n-1 << " inclusive numbers between 1 and " << n << ": ";
//     for (int i = 0; i < n - 1; i++) {
//         cin >> arr[i];
//     }

//     vector<int> hashh(n+1, 0);
//     for (int i = 0; i < n - 1; i += 1) {
//         hashh[arr[i]] += 1;
//     }

//     for (int i = 1; i <= n; i++) {
//         if(hashh[i] == 0) {
//             cout << i << endl;
//             break;
//         }
//     }

//     return 0;
// }

// OPTIMAL APPROACH 1: time complexity - o(n), space complexity - o(1)
// BETTER APPROACH
int main() {
    int n;
    cin >> n;

    int arr[n-1];
    cout << "Enter " << n-1 << " inclusive numbers between 1 and " << n << ": ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int sum_whole_arr = 0;
    for (int i = 1; i <= n; i++) {
        sum_whole_arr += i;
    }

    int sum_partial_arr = 0;
    for (int i = 0; i < n-1; i++) {
        sum_partial_arr += arr[i];
    }

    cout << sum_whole_arr - sum_partial_arr << endl;

    return 0;
}