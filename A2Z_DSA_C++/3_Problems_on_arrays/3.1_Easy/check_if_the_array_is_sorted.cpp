#include<iostream>
using namespace std;

int main() { // time complexity - o(n)
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    bool is_sorted = true;

    for (int i = 1; i < n; i += 1) {
        if (arr[i] < arr[i-1]) {
            is_sorted = false;
            break;
        }
    }

    if (is_sorted) {
        cout << "Sorted" << endl;
    }
    else {
        cout << "Not sorted" << endl;
    }

    return 0;
}