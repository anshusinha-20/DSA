#include<iostream>
using namespace std;

// // BRUTE APPRAOCH: time complexity - o(nlogn), space complexity - o(1)                                     
// int partition(int arr[], int l, int r) { 
//     int pivot = arr[l];
//     int i = l;
//     int j = r;

//     while (i < j) {
//         while (arr[i] <= pivot && i <= r) {
//             i++;
//         }
//         while (arr[j] > pivot && j >= l) {
//             j--;
//         }
//         if (i < j) {
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
//     int temp = arr[l];
//     arr[l] = arr[j];
//     arr[j] = temp;
//     return j;
// }

// void quickSort(int arr[], int l, int r) {
//     if (l < r) {
//         int p_index = partition(arr, l, r);
//         quickSort(arr, l, p_index - 1);
//         quickSort(arr, p_index + 1, r);
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) { 
//         cin >> arr[i];
//     }

//     quickSort(arr, 0, n-1);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// BETTER APPROACH (Dutch national flag): time complexity - o(n), space complexity - o(1)
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count0 = 0;
    int count1 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        }
        else if (arr[i] == 1) {
            count1++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (count0 > 0) {
            arr[i] = 0;
            count0--;
            continue;
        }
        else if(count1 > 0) {
            arr[i] = 1;
            count1--;
            continue;
        }
        else {
            arr[i] = 2;

        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}