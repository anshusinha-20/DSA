/*
// 1. Check if an array is sorted or not.
*/

// #include<iostream>
// using namespace std;

// bool checkSorted(int arr[], int n) { // * Time complexity: O(n)
//     if (n == 1) {
//         return true;
//     }
//     return arr[0] < arr[1] && checkSorted(arr+1, n-1); // arr+1 makes the pointer to point the next element in the array
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << boolalpha << checkSorted(arr, n) << endl;

//     return 0;
// }

/////-----/////

/*
// 2. Print numbers till n: i. decreasing order, ii. increasing order.
*/

// #include<iostream>
// using namespace std;

// void decreasingOrder(int n) { // * Time complexity: O(n)
//     if (n==0) {
//         return;
//     }
//     cout << n << endl;
//     decreasingOrder(n-1);
// }

// void increasingOrder(int n) { // * Time complexity: O(n)
//     if (n==0) {
//         return ;
//     }
//     increasingOrder(n-1);
//     cout <<  n << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << endl;
//     decreasingOrder(n);

//     cout << endl;
//     increasingOrder(n);

//     return 0;
// }

/////-----/////

/*
// 3. Find the first and last occurrence of a number in an array.
*/

#include<iostream>
using namespace std;

int firstOccur(int arr[], int n, int i, int key) { // * Time complexity: O(n)
    if (i == n) { // * base case: if the array is traversed and the key is not found
        return -1;
    }

    if (arr[i] == key) {
        return i;
    }
    return firstOccur(arr, n, i+1, key);
}

int lastOccur(int arr[], int n, int j, int key) { // * Time complexity: O(n)
    if (j < 0) { // * base case: if the array is traversed and the key is not found
        return -1; 
    }

    if (arr[j] == key) {
        return j;
    }
    return lastOccur(arr, n, j-1, key);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0, j = n-1;
    int key;
    cin >> key;

    cout << "First: " << firstOccur(arr, n, i, key) << endl;
    cout << "Last: " << lastOccur(arr, n , j, key) << endl;

    return 0;
}