#include<iostream>
#include<vector>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n), space complexity = o(n)
// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i += 1) {
//         cin >> arr[i];
//     }

//     vector<int> temp;
//     for (int i = 0; i < n; i += 1) {
//         if (arr[i] != 0) {
//             temp.emplace_back(arr[i]);
//         }
//     }

//     for (int i = 0; i < temp.size(); i += 1) {
//         arr[i] = temp[i];
//     }

//     for (int i = temp.size(); i < n; i += 1) {
//         arr[i] = 0;
//     }

//     for (int i = 0; i < n; i += 1) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// OPTIMAL APPROACH: time complexity - o(n), space complxity - o(1)
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    int j = -1;

    for (int i = 0; i < n; i += 1) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    if (j != 0) {
        for (int i = 0; i < n; i += 1) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    else {
        for (int i = j + 1; i < n; i += 1) {
            if (arr[i] != 0) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j += 1;
            }
        }
        for (int i = 0; i < n; i += 1) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    return 0;
}