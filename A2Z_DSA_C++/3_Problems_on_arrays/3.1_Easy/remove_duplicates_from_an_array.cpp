#include<iostream>
#include<set>
using namespace std;

// // BRUTE APPROACH: time complexity - o(nlogn + n), space complexity - o(n)
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i += 1) {
//         cin >> arr[i];
//     }

//     set<int> s;
//     for (int i = 0; i < n; i += 1) {
//         s.insert(arr[i]);
//     }

//     int num_el = 0;
//     for (auto i : s) {
//         num_el += 1;
//     }

//     cout << num_el << endl;

//     return 0; 
// }

// OPTIMAL APPROACH: time complexity - o(n), space complexity - o(1)
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    int i = 0;
    for (int j = 1; j < n; j += 1) {
        if (arr[j] != arr[i]) {
            arr[i + 1] = arr[j];
            i += 1;
        }
    }

    cout << i+1 << endl;

    return 0;
}