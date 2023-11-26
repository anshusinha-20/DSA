/* 
// 1. Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).
// Time complexity - O(n)
*/

// #include<iostream>
// #include<climits>
// using namespace std;

// void maxTillN(int arr[], int n, int maxN) {

//     // * Ex: 0 -9 1 3 -4 5

//     for (int i = 0; i < n; i++) {
//         maxN = max(maxN, arr[i]);
//         cout << maxN << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int maxN = INT_MIN;

//     maxTillN(arr, n, maxN);

//     return 0;
// }

/////-----/////

/*
// 2. Given an array a[] of size n. Output sum of each sub-array of the given array.
// Time complexity: O(n^2)
*/

// #include<iostream>
// using namespace std;

// void sumAllSubArray(int arr[], int n) {

//     // * Ex: 1 2 0 7 2

//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i; j < n; j++) {
//             sum += arr[j];
//             cout << sum << " "; 
//         } 
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     sumAllSubArray(arr, n);

//     return 0;
// }

/////-----/////

/*
// 3. An arithmetic array is an array that contains at least two integers and the differences between
// consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, 
// while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.
// Time complexity: O(n)
*/

// #include<iostream>
// using namespace std;

// void longestArithmeticSubArray(int arr[], int n) {

//     //  * Ex: 10  7  4  6  8  10  11
//     //  *      -3  -3  2  2  2   1    required length = 4

//     int ans = 2; // least possible answer
//     int pd = arr[1] - arr[0]; // present difference
//     int j = 2; // since 0 and 1 indices are taken into account, iterator j will begin from index 2
//     int currentLength = 2; // least possible length

//     while (j < n) {
//         if (pd == arr[j] - arr[j-1]) {
//             currentLength++;
//         }
//         else {
//             pd = arr[j] - arr[j-1];
//             currentLength = 2;
//         }
//         ans = max(ans, currentLength);
//         j++;
//     }

//     cout << ans << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     longestArithmeticSubArray(arr, n);

//     return 0;
// }

/////-----/////

/*
// 4. Isyana is given the number of visitors at her local theme park on ​N​ consecutive days. The number of visitors on the i-th day is ​V​i.​ A day is ​record breaking​ if it satisfies both of the following conditions:
// ● The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
// ● Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
// Note that the very first day could be a record breaking day!
// Please help Isyana find out the number of record breaking days.
// Time complexity: O(n)
*/

#include<iostream>
using namespace std;

void recordBreaker(int arr[], int n) {
    
    // * Ex: 1 2 0 7 2 0 2 2

    int rbDays = 0;

    if (n == 1) {
        rbDays = 1;
        cout << rbDays << endl;
        return;
    }

    int maxN = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxN && arr[i] > arr[i+1]) {
            rbDays++;
        }
        maxN = max(maxN, arr[i]);
    }

    cout << rbDays << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    recordBreaker(arr, n);

    return 0;
}