#include<iostream>
using namespace std;

// OPTIMAL APPROACH: time complexity - o(n), space complexity - o(1)
int main() {
    int n; // number of elements in the array
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; // taking array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp = arr[0]; // temp array storing the first value of the array 'arr'

    for (int i = 1; i < n; i++) { // shifting array elements to the left
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp; // putting the last value of the array which was previously the first value, and was store in the temp array

    for (int i = 0; i < n; i++) { // printing the final array
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}