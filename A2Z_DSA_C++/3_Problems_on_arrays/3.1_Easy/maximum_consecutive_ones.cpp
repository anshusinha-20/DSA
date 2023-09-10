#include<iostream>
using namespace std;

int maximum_1(int &count, int &maxi) {
    if (count > maxi) {
        maxi = count;
    }
    return maxi;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            maxi = maximum_1(count, maxi);
        }
        else {
            count = 0;
        }
    }

    cout << maxi << endl;

    return 0;
}