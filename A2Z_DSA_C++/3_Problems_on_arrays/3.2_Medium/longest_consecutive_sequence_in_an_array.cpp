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

    // arr = [102, 4, 100, 1, 101, 3, 2, 1, 1]

    int longest = 1;
    for (int i = 0; i < n; i++) {
        int ele = arr[i];
        int count = 1;
        for (int j = 0; j < n; j++) {
            if (arr[j] == ele + 1) {
                ele = arr[j];
                count += 1;
                j = -1;
            }
        }
        longest = max(longest, count);
    }

    cout << longest << endl;

    return 0;
}