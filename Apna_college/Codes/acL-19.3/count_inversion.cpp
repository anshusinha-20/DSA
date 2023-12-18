/*
// Count the inversions in the given array. 
// Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
*/

#include<iostream>
using namespace std;

int countInversions1(int arr[], int n) { // * Time complexity: O(n^2)
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << countInversions1(arr, n) << endl;

    return 0;
}