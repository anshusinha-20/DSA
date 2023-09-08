#include<iostream>
using namespace std;

// BRUTE APPROACH: time complexity - o(n + n + n + n) = o(4n) = o(n), space complexity - o(n)
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter number of places to rotate the array by: ";
    cin >> k;

    // storing the first k element in temp
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // moving the right element to the left
    for (int i = k; i < n; i ++) {
        arr[i-k] = arr[i];
    }

    // moving the left elements to the right
    int j = 0;
    for (int i = n-k; i < n; i++) {
        arr[i] = temp[j];
        j += 1;
    }

    // printing the final array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}