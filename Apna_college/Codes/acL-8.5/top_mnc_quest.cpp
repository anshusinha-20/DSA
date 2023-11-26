/*
// 1. Given an array ​arr​[] of size ​N​. 
// The task is to find the first repeating element in an array of integers, 
// i.e., an element that occurs more than once and whose index of first occurrence is smallest.
// Time complexity: O(N)
*/

// #include<iostream>
// #include<climits>
// using namespace std;

// void minRepeatIndex(int arr[], int n) {

//     // * Ex: 1 5 3 4 3 5 6

//     // * fill the arrIdcs with -1
//     int N = 1e6+2;
//     int arrIdcs[N];
//     for (int i = 0; i < N; i++) {
//         arrIdcs[i] = -1;
//     }

//     // * hold the min index of first repeating element
//     int minIdx = INT_MAX;

//     for (int i = 0; i < n; i++) {
//         if (arrIdcs[arr[i]] != -1) {
//             minIdx = min(minIdx, arrIdcs[arr[i]]);
//         }

//         arrIdcs[arr[i]] = i;
//     }

//     if (minIdx == INT_MAX) {
//         cout << -1 << endl;
//     }
//     else {
//         cout << minIdx + 1 << endl; // Since array indices start from 0, 
//                                     // the code prints minIdx + 1 to indicate the position of 
//                                     // the first repeating element in the array.
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     minRepeatIndex(arr, n);

//     return 0;
// }

/////-----/////

/*
// Given an unsorted array ​A ​of size ​N​ of non-negative integers, 
// find a continuous sub-array which adds to a given number ​S.
// Time complexity: O()
*/

// #include<iostream>
// using namespace std;

// void contSubArraySumS(int arr[], int n, int S) {

// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int S;
//     cin >> S;

//     contSubArraySumS(arr, n, S);
//     return 0;
// }

/////-----/////

/*
// Find the smallest positive missing number in the given array. 
// Example: [0, -10, 1, 3, -20], Ans = 2
// Time complexity: O(N)
*/

#include<iostream>
using namespace std;

void smallestPosMissNum(int arr[], int n) {
    // * fill the checkArr with 'false' boolean value
    int N = 1e6+2;
    bool checkArr[N];
    for (int i = 0; i < N; i++) {
        checkArr[i] = false;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            checkArr[arr[i]] = true;
        }
    }

    int ans = -1;
    for (int i = 1; i < N; i++) {
        if (checkArr[i] == false) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    smallestPosMissNum(arr, n);

    return 0;
}