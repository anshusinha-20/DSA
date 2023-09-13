#include<iostream>
using namespace std;

// BRUTE APPROACH
int main () {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int half = n/2;

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > half) {
            cout << arr[i] << endl;
            break;
        }
        else {
            count = 0;
        }
    }

    return 0;

}