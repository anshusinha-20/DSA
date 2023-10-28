// p1: generate all the strings of n-bits

#include<iostream>
using namespace std;

void generate_n_bits(int i, bool arr[], int n) {
    if (i == n) {
        for (int j=0; j<n; j++) {
            cout << arr[j] << ' ';
        }
        cout << endl;
        return;
    }
    else {
        arr[i] = 0; 
        generate_n_bits(i+1, arr, n);
        arr[i] = 1;
        generate_n_bits(i+1, arr, n);
    }
}

int main() {
    int n;
    cin >> n;

    bool arr[n];
    int i = 0; // initially setting the value of i i.e, the first bit to be 0

    generate_n_bits(i, arr, n);

    return 0;
}