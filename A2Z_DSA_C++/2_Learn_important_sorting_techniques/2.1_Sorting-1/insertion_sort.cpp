#include<iostream>
using namespace std;

// // ITERATIVE APPROACH
// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i += 1) {
//         for(int j = i; j > 0 && arr[j-1] > arr[j]; j -= 1) {
//             int temp = arr[j];
//             arr[j] = arr[j-1];
//             arr[j-1] = temp;
//         }
//     }
// }

// RECURSIVE APPROACH
void insertionSort(int arr[], int n, int i = 1) {
    if (i == n) { // counter for i
        return;
    }

    for (int j = i; j > 0 && arr[j-1] > arr[j]; j -= 1) {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
    }

    insertionSort(arr, n, i += 1);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for (int i = 0; i < n; i += 1) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
} 