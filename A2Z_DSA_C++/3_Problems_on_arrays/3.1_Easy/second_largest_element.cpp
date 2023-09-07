#include<iostream>
using namespace std;

// BRUTE APPROACH
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (arr[i] <= pivot && i <= high) {
            i += 1;
        }
        while (arr[j] > pivot && j >= low) {
            j -= 1;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
 
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p_index = partition(arr, low, high);
        quickSort(arr, low, p_index - 1);
        quickSort(arr, p_index + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);

    for (int i = n - 2; i >= 0; i -= 1) {
        if (arr[i] != arr[n-1]) {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}
