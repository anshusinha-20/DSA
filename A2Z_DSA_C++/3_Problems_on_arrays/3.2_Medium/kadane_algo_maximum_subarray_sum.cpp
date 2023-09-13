#include<iostream>
using namespace std;

// BRUTE APPROACH
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            maxi = max(sum, maxi);
        }
    }

    cout << maxi << endl;

    return 0;
}