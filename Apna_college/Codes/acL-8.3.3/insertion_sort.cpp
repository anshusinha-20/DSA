#include<iostream>
using namespace std;

// * Insertion sort - O(n^2)
// * insert an element from unsorted array to its correct position in sorted array
void insertionSort(int arr[], int n) {

    // * Ex: 5 4 3 2 1

    for (int i = 1; i < n; i++) {
        for (int j = i-1; j >= 0 && arr[j] > arr[j+1]; j--) {
            // * swapping
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }

}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}