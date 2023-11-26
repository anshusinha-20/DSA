// // * 1. Print all possible sub-arrays 
// // *  Time complexity: O(n^3)

// #include<iostream>
// using namespace std;

// void possibleSubArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = ; j < n; j++) {
//             for (int k = i; k <= j; k++) {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     possibleSubArray(arr, n);

//     return 0;
// }

/////-----/////

// // * 2. Maximum sub-array sum

// // * Brute force
// // *  Time complexity: O(n^3)

// #include<iostream>
// #include<climits>
// using namespace std;

// void maxSubArrSum(int arr[], int n) {
//     int maxSum = INT_MIN;
//     int sum;

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             sum = 0;
//             for (int k = i; k <= j; k++) {
//                 // cout << arr[k] << " ";
//                 sum += arr[k];
//             }
//             maxSum = max(maxSum, sum);
//         }
//     }

//     cout << maxSum << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     maxSubArrSum(arr, n);

//     return 0;
// }