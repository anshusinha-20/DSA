#include<iostream>
#include<map>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n^2), space complexity - o(1)
// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++) {
//         int count = 0;
//         for (int j = 0; j < n; j++) {
//             if (arr[j] == arr[i]) {
//                 count += 1;
//             }
//         }
//         if (count == 1) {
//             cout << arr[i] << endl;
//             break;
//         }
//     }

//     return 0;
// }

// // BETTER APPRAOCH - time complexity - o(n), space complexity - o(n)
// int main() {
//     int n; // number of elements in the array
//     cin >> n;

//     int arr[n]; // filling array with the elements
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     map<int, int> m; // creating a map with elements as keys and their number of occurences as values
//     for (int i = 0; i < n; i++) {
//         m[arr[i]] += 1;
//     }

//     for (auto i : m) {
//         if (i.second == 1) { // if value is 1
//             cout << i.first << endl; // print the key storing value 1
//             break;
//         }
//     }

//     return 0;
// }

// OPTIMAL APPROACH: time complexity - o(n), space complexity - o(1)
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int xor1 = 0;
    for (int i = 0; i < n; i++) {
        xor1 ^= arr[i];
    }

    cout << xor1 << endl;

    return 0;
}
