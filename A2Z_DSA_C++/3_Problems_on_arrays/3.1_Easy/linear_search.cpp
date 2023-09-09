#include<iostream>
using namespace std;

bool linear_search(int arr[], int n, int el) { // function to retur true if element found or return false if element not found
    for (int i = 0; i < n; i += 1) {
        if (arr[i] == el) {
            return true;
            break;
        }
    }
    return false;
}

int main() {
    int n; // number of elements in the array
    cin >> n;

    int arr[n]; // filling the array with elements
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    int el; // element to search for in the array
    cin >> el;
    if (linear_search(arr, n, el)) {
        cout << "Element found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}