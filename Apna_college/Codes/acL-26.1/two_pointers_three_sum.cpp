/*
// Given an array and a value, find if there exists three numbers, whose
// sum is equal to the given value.
*/

// // * Brute-force approach: Time complexity - O(n^3)

// #include<iostream>
// using namespace std;

// void threeSum(int arr[], int n, int k) {
//     bool ans = false;
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n; j++) {
//             for (int l = j+1; l < n; l++) {
//                 if (k == (arr[i] + arr[j] + arr[l])) {
//                     ans = true;
//                     break;
//                 }
//             }
//         }
//     }
//     cout << boolalpha << ans << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int k;
//     cin >> k;

//     threeSum(arr, n, k);

//     return 0;
// }

/////-----/////

// * Optimal approach: Time complexity - O(n^2)

#include<iostream>
using namespace std;

void threeSum2(int arr[], int n, int k) {
    bool ans = false;
    sort(arr, arr+n);

    for (int i = 0; i < n; i++) {
        int low = i+1;
        int high = n-1;
        while(low < high) {
            int current = arr[i] + arr[low] + arr[high];
            if (k == current) {
                ans = true;
                break;
            } 
            else if (k < current) {
                high--;
            }
            else {
                low++;
            }
        }
    }
    cout << boolalpha << ans << endl;
}

int main() {
    int n; cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k; cin >> k;

    threeSum2(arr, n, k);

    return 0;
}