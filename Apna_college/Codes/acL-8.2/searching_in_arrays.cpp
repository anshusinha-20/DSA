#include<iostream>
using namespace std;

// * Linear search - O(n)
// int linearSearch(int arr[], int n, int key) {
//     int flag = -1;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             flag = i;
//         }
//     }

//     return flag; // ! returning the index value
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;

//     cout << linearSearch(arr, n, key) << endl;

//     return 0;
// }

/////-----/////

// * Binary search - O(log n)

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n-1;
    
    while (low <= high) {
        int mid = (low+high)/2;
        if (key == arr[mid]) {
            return mid;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << binarySearch(arr, n, key) << endl;
}