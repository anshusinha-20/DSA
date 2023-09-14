#include<iostream>
#include<vector>
using namespace std;

// BRUTE APPROACH: time complexity - o(2n), space complexity - o(n)
int main () {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> positive;
    vector<int>negative;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive.emplace_back(arr[i]);
        }
        else if (arr[i] < 0) {
            negative.emplace_back(arr[i]);
        }
    }

    for (int i = 0; i < n/2; i++) {
        arr[2*i] = positive[i];
        arr[2*i+1] = negative[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}