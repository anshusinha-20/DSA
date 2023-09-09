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
    int n; // number of elements in the array
    cin >> n;

    int arr[n]; // filling the array with the elements
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    int j = -1; // setting value of j to be -1

    for (int i = 0; i < n; i += 1) { // set the j value to first index value of element 0
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) { // if no zeros are found in the array return the array as it is
        return a;
    }

    for (int i = j + 1; i < n; i++) { // if i != 0 swap the ith element with the jth element and increment j's value
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j += 1;
        }
    }

    for (int i = 0; i < n; i += 1) { // print the final array
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}