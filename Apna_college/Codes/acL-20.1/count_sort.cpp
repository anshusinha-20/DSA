#include<iostream>
using namespace std;

void countSort(int arr[], int n) {
    // * find the maximum element
    int maxN = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxN) {
            maxN = arr[i];
        }
    }

    // * make a count array from 0 to maximum element
    int countArr[100] = {0};
    for (int i = 0; i < n; i++) {
        countArr[arr[i]]++;
    }

    // * update countArr such that each successive element is the sum of the previous element
    for (int i = 1; i <= maxN; i++) {
        countArr[i] += countArr[i-1];
    }

    // * make the sortedArr
    int sortedArr[n];

    /*
    // the updated countArr contains now the positions of the element where they will placed at to sort the array
    // such that if we traverse from the last element from the original array, we will check for the element=index of
    // updated countArr, we will reduce the index's element by 1 and we will place the element in the reduced index of the
    // sortedArr
    */
    for (int i = n-1; i >= 0; i--) {
        countArr[arr[i]] -= 1;
        sortedArr[countArr[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << sortedArr[i] << " ";
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

    countSort(arr, n);

    return 0;
}