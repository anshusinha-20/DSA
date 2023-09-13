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

// // BETTER APPROACH: time complexity - o(n), space complexity - o(n)
// int main () {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int half = n/2;

//     map<int, int> m;
//     for (int i = 0; i < n; i++) {
//         m[arr[i]]++;
//     }

//     for (auto i : m) {
//         if (i.second > half) {
//             cout << i.first << endl;
//             break;
//         }
//     }

//     return 0;
// }

// OPTIMAL APPROACH: Moore's voting algo
// 1. find the element which exists even after cancelling out all the elements with each other
// 2. iterate through the array again to verify

int main () {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count1 = 0;

    int half = n/2;

    int el = arr[0];
    for (int i = 0; i < n-1; i++) {
        if (arr[i] == el) {
            count1++;
        }
        else {
            count1--;
            if (count1 == 0) {
                el = arr[i+1];
            }
        }
    }

    int count2 = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == el) {
            count2++;
        }
    }

    if (count2 > half) {
        cout << el << endl;
    }

    return 0;
}