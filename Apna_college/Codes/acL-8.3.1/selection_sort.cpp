#include<iostream>
#include<climits>
using namespace std;

// * Selection sort - O(n^2)
// * find the minimum element in 'unsorted' array and swap it with element at the beginning
void selectionSort(int arr[], int n) {

    // * Ex: 5 4 3 2 1

    for (int i = 0; i < n-1; i++) {
        int minI = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minI]) {
                minI = j; // * finding the minimum element's index
            }
        }
        // * swapping
        int temp = arr[i];
        arr[i] = arr[minI];
        arr[minI] = temp;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}