#include<iostream>
#include<utility>
using namespace std;

// BRUTE APPROACH: time complexity - o(n^2), space complexity - o(1)
int main() {
    int n; // number of elements in the array
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) { // filling the array with the eleements
        cin >> arr[i];
    }

    int k; // the required sum
    cin >> k;

    pair<int, int> p;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i+1; j < n; j++) {
            sum = arr[i] + arr[j];
            if (sum == k) {
                p.first = arr[i];
                p.second = arr[j];
                break;
            }
        }
    }

    if (p.first && p.second) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}