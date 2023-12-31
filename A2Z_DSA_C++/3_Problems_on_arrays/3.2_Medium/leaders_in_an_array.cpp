#include<iostream>
#include<vector>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n^2), space complexity - o(n)
// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<int> result;
//     bool leader;
//     for (int i = 0; i < n; i++) {
//         leader = true;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] >= arr[i]) {
//                 leader = false;
//                 break;
//             }
//         }
//         if (leader == true) {
//             result.emplace_back(arr[i]);
//         }
//     }

//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// OPTIMAL APPROACH: time complexity - o(n), space complexity - o(n)
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result;
    int maxi = INT_MIN;
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] > maxi) {
            maxi = arr[i];
            result.emplace_back(maxi);
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}