#include<iostream>
using namespace std;

// BRUTE APPROACH: time complexity - o(n^2), space complexity - o(1)
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count += 1;
            }
        }
        if (count == 1) {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}