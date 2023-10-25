// // 2.1-3
// // Rewrite the INSERTION-SORT procedure to sort into monotonically decreasing in- stead of monotonically increasing order.

// #include<iostream>
// using namespace std;

// void insertion_sort_descend(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i-1;
//         while (j >= 0 && arr[j] < key) {
//             arr[j+1] = arr[j];
//             j-=1;
//         }
//         arr[j+1] = key;
//     }
// } 

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     insertion_sort_descend(arr, n);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << ' ';
//     }
//     cout << endl;

//     return 0;
// }

// 2.1-4
// Write pseudocode for linear search, which scans through the array from beginning to end, looking for . 
// Using a loop invariant, prove that your algorithm is correct. 
// Make sure that your loop invariant fulûlls the three necessary properties.

#include<iostream>
using namespace std;

void linear_search(int arr[], int n, int x) {
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            flag = true;
        }
    }

    if (flag) 
        cout << "Element exists" << endl;
    else 
        cout << "Element doesn't exist" << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    linear_search(arr, n, x);

    return 0;
}