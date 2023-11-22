#include <iostream>
#include <climits>
using namespace std;

int main() {
//    // Given an array of size n. For every i from 0 to n-1 output max (a[0], a[1],..., a[i])
//    int n;
//    cout << "Enter size of the array: ";
//    cin >> n;
//
//    int arr[n];
//
//    for (int i = 0; i < n; i++) {
//        cout << "Enter elements: ";
//        cin >> arr[i];
//    }
//
//    cout << "Array elements: ";
//
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//
//    int mx = INT_MIN;
//
//    for (int i = 0; i < n; i++) {
//        if (arr[i] > mx) {
//            mx = max(mx, arr[i]);
//        }
//        cout << mx << " ";
//    }
//
//    cout << endl;

// Number of sub-arrays in a given array = nC2 + n = n * (n + 1) / 2

// Number of sub-sequences of an array with n elements = 2^n

    // Given an array of size n. Output sum of each sub-array of the given array.
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter array elements: ";
        cin >> arr[i];
    }

    cout << "Array elements: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            cout << sum << " ";
        }
    }

    cout << endl;

    return 0;
}
