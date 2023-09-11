#include<iostream>
#include<utility>
#include<map>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n^2), space complexity - o(1)
// int main() {
//     int n; // number of elements in the array
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) { // filling the array with the eleements
//         cin >> arr[i];
//     }

//     int k; // the required sum
//     cin >> k;

//     pair<int, int> p;
//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i+1; j < n; j++) {
//             sum = arr[i] + arr[j];
//             if (sum == k) {
//                 p.first = arr[i];
//                 p.second = arr[j];
//                 break;
//             }
//         }
//     }

//     if (p.first != -1 && p.second != -1) {
//         cout << "yes" << endl;
//     }
//     else {
//         cout << "no" << endl;
//     }

//     return 0;
// }

// BETTER APPROACH: time complexity - o(n), space complexity - o(n)
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    map<int, int> m;
    string ans = "no";
    for (int i = 0; i < n; i++) {
        m[arr[i]] = i;
        if (m.find(k-arr[i]) != m.end()) { // 14 - 6 = 8, if 8 exits in the map, return yes
            ans = "yes";
            break;
        }
    }

    cout << ans << endl;

    return 0;

}

// OPTIMAL APPROACH
