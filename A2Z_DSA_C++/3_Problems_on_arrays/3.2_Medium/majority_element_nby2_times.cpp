#include<iostream>
#include<map>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n^2), space complexity - o(1)
// int main () {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int half = n/2;

//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if (count > half) {
//             cout << arr[i] << endl;
//             break;
//         }
//         else {
//             count = 0;
//         }
//     }

//     return 0;

// }

// BETTER APPROACH: time complexity - o(n), space complexity - o(n)
int main () {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int half = n/2;

    map<int, int> m;
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    for (auto i : m) {
        if (i.second > half) {
            cout << i.first << endl;
            break;
        }
    }

    return 0;
}