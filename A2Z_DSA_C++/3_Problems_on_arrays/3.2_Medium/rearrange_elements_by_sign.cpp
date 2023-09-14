#include<iostream>
#include<vector>
using namespace std;

// // BRUTE APPROACH: time complexity - o(2n), space complexity - o(n)
// int main () {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<int> positive;
//     vector<int>negative;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > 0) {
//             positive.emplace_back(arr[i]);
//         }
//         else if (arr[i] < 0) {
//             negative.emplace_back(arr[i]);
//         }
//     }

//     for (int i = 0; i < n/2; i++) {
//         arr[2*i] = positive[i];
//         arr[2*i+1] = negative[i];
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// OPTIMAL APPROACH: time complexity - o(n), space complexity = o(n)
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result(n, 0);
    int pos_pos = 0;
    int neg_pos = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            result[pos_pos] = arr[i];
            pos_pos += 2;
        }
        else if (arr[i] < 0) {
            result[neg_pos] = arr[i];
            neg_pos += 2;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}