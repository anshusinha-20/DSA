#include<iostream>
using namespace std;

/* 1. find the longest prefix
    2. find the element just after the longest prefix, and find the element just bigger than that number after the longest prefix, i.e, if 1 2 3, so longest prefix is 1
        and the number just after the longest prefix is 2 and the number just greater than 2 is 3
    3. sort the number after the second prefix in ascending order
*/

void reverse(int arr[], int l, int r) {
    while (l <= r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = -1;
    for (int i = n-2; i >= 0; i--) { // if break point is found, store its index
        if (arr[i] < arr[i+1]) {
            index = i;
            break;
        }
    }

    if (index == -1) { // if no break point is found return the reversed array
        reverse(arr, 0, n-1);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    for (int i = n-1; i > index; i--) { // swap the index element with an element just greater than it
        if (arr[i] >= arr[index]) {
            swap(arr[i], arr[index]);
            break;
        }
    }

    reverse(arr, index+1, n-1); // reverse the left over array after the index element

    for (int i = 0; i < n; i++) { // print the final array
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}