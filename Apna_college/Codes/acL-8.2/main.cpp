#include <iostream>
using namespace std;

//int main() {
//    // linear search
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
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//
//    int ele;
//    cout << "Enter element to found: ";
//    cin >> ele;
//
//    for (int i = 0; i < n ; i++) {
//        if (ele == arr[i]) {
//            cout << ele << " found at index " << i << endl;
//            break;
//        }
//    }
//
//    return 0;
//}

//int binarySearch(int arr[], int n, int ele) {
//    int s = 0;
//    int e = n;
//
//    while (s <= e) {
//        int mid = (s + e) / 2;
//        if (ele == arr[mid]) {
//            return mid;
//        }
//        else if (ele < arr[mid]) {
//            e = mid - 1;
//        }
//        else {
//            s = mid + 1;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    // binary search (elements must be sorted)
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
//    cout << "Array: ";
//
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//
//    int ele;
//    cout << "Enter element to found: ";
//    cin >> ele;
//
//    cout << "Element found at index: " << binarySearch(arr, n, ele) << endl;
//
//    return 0;
//}


