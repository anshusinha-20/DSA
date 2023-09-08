#include<iostream>
#include<vector>
using namespace std;

// BRUTE APPROACH: time complexity - o(n), space complexity = o(n)
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    vector<int> temp;
    for (int i = 0; i < n; i += 1) {
        if (arr[i] != 0) {
            temp.emplace_back(arr[i]);
        }
    }

    for (int i = 0; i < temp.size(); i += 1) {
        arr[i] = temp[i];
    }

    for (int i = temp.size(); i < n; i += 1) {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i += 1) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}