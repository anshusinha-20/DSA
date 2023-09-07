#include<iostream>
#include<set>
using namespace std;

// BRUTE APPROACH: time complexity - o(nlogn + n), space complexity - o(n)
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    set<int> s;
    for (int i = 0; i < n; i += 1) {
        s.insert(arr[i]);
    }

    int num_el = 0;
    for (auto i : s) {
        num_el += 1;
    }

    cout << num_el << endl;

    return 0; 
}