#include<iostream>
using namespace std;

bool linear_search(int arr[], int n, int el) {
    for (int i = 0; i < n; i += 1) {
        if (arr[i] == el) {
            return true;
            break;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    int el;
    cin >> el;
    if (linear_search(arr, n, el)) {
        cout << "Element found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}