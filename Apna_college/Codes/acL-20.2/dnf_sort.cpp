/*
// DNF sort or 0, 1, 2 sort
*/

#include<iostream>
using namespace std;

void dnfSort(int arr[], int n) {
    int low = 0, mid = 0, high = n-1;
    while (mid<=high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++, mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else if (arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    dnfSort(arr, n);

    return 0;
}