#include<iostream>
using namespace std;

// // BRUTE APPROACH: time complexity - o(nlogn + n)
// int partition(int arr[], int low, int high) {
//     int pivot = arr[low];
//     int i = low;
//     int j = high;
//     while (i < j) {
//         while (arr[i] <= pivot && i <= high) {
//             i += 1;
//         }
//         while (arr[j] > pivot && j >= low) {
//             j -= 1;
//         }
//         if (i < j) {
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[low], arr[j]);
//     return j;
// }
 
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int p_index = partition(arr, low, high);
//         quickSort(arr, low, p_index - 1);
//         quickSort(arr, p_index + 1, high);
//     }
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i += 1) {
//         cin >> arr[i];
//     }

//     quickSort(arr, 0, n-1);

//     for (int i = n - 2; i >= 0; i -= 1) {
//         if (arr[i] != arr[n-1]) {
//             cout << arr[i] << endl;
//             break;
//         }
//     }

//     return 0;
// }

// // BETTER APPROACH: time complexity - o(n+n) = o(2n) = o(n)
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i += 1) {
//         cin >> arr[i];
//     }  

//     int largest = arr[0];
//     int second_largest = arr[0];

//     for (int i = 0; i < n; i += 1) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     } 

//     for (int i = 0; i < n; i += 1) {
//         if (arr[i] != largest && arr[i] > second_largest) {
//             second_largest = arr[i];
//         }
//     }

//     cout << second_largest << endl;

//     return 0;
// }

// OPTIMAL APPROACH: time complexity - o(n)
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second_larget = INT_MIN;

    for (int i = 1; i < n; i += 1) {
        if (arr[i] > largest) {
            second_larget = largest;
            largest = arr[i];
        } 
    }

    cout << second_larget << endl;

    return 0;
}