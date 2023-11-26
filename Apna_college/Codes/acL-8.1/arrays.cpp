#include<iostream>
#include<climits>
using namespace std;

// * find the max and min elements from an array of integers
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxN = INT_MIN;
    int minN = INT_MAX;

    for (int i = 0; i < n; i++) {
        // if (arr[i] < min) {
        //     minN = arr[i];
        // }

        // if (arr[i] > max) {
        //     maxN = arr[i];
        // }

        // * with built in functions
        maxN = max(maxN, arr[i]);
        minN = min(minN, arr[i]);
    }

    cout << "Max number: " << maxN << "\nMin number: " << minN << endl; 

    return 0;
}