#include<iostream>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n + n + n + n) = o(4n) = o(n), space complexity - o(k)
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int k;
//     cout << "Enter number of places to rotate the array by: ";
//     cin >> k;

//     k = k % n;

//     // storing the first k element in temp
//     int temp[k];
//     for (int i = 0; i < k; i++) {
//         temp[i] = arr[i];
//     }

//     // moving the right element to the left
//     for (int i = k; i < n; i ++) {
//         arr[i-k] = arr[i];
//     }

//     // // moving the left elements to the right
//     // int j = 0;
//     // for (int i = n-k; i < n; i++) {
//     //     arr[i] = temp[j];
//     //     j += 1;
//     // }

//     // moving the left elements to the right
//     for (int i = n-k; i < n; i++) {
//         arr[i] = temp[i-(n-k)]; // (3 - 5 - 2 = 0), (4 - 5 - 2 = 1) and so on
//     }

//     // printing the final array
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// OPTIMAL APPROACH: time complexity - o(n), space complexity - o(1)
// void reverse_recursive(int arr[], int l, int r) {
//     if (l >= r) {
//         return;
//     }

//     int temp = arr[l];
//     arr[l] = arr[r];
//     arr[r] = temp;

//     reverse_recursive(arr, l+1, r-1);
// }

void reverse_iterative(int arr[], int l, int r) {
    while (l <= r) { // run the loop until the left postion is smaller than the right position
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l += 1;
        r -= 1;
    }
}

int main() {
    int n; // number of elements in the array
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; // filling the array with the elements
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    int d; // number of places to rotate the element by
    cout << "Enter number of place to rotate the array by: ";
    cin >> d;

    d = d % n; // ensure d is withing the array length

    reverse_iterative(arr, 0, d-1); // left reverse
    reverse_iterative(arr, d, n-1); // right reverse
    reverse_iterative(arr, 0, n-1); // whole array reverse

    for (int i = 0; i < n; i += 1) { // print the final array
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}