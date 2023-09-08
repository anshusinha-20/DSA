#include<iostream>
using namespace std;

// OPTIMAL APPROACH: time complexity - o(n), space complexity - o(1)
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp = arr[0];

    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}