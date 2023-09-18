#include<iostream>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n^2), space complexity - o(1)
// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // arr = [102, 4, 100, 1, 101, 3, 2, 1, 1]

//     int longest = 1;
//     for (int i = 0; i < n; i++) {
//         int ele = arr[i];
//         int count = 1;
//         for (int j = 0; j < n; j++) {
//             if (arr[j] == ele + 1) {
//                 ele = arr[j];
//                 count += 1;
//                 j = -1;
//             }
//         }
//         longest = max(longest, count);
//     }

//     cout << longest << endl;

//     return 0;
// }

// BETTER APPROACH: time complexity - o(n + nlogn), space complexity - o(1)
int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int i = start;
    int j = end;

    while (i < j) {
        while (arr[i] <= pivot && i <= end) {
            i++;
        }
        while (arr[j] > pivot && j >= start) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[start], arr[j]);
    
    return j;
}

void quicksort(int arr[], int start, int end) {
    if (start < end) {
        int p_index = partition(arr, start, end);
        quicksort(arr, start, p_index-1);
        quicksort(arr, p_index+1, end);
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quicksort(arr, 0, n-1);

    // arr = [1, 1, 1, 2, 3, 3, 4, 100, 101, 102, 102, 103, 104, 105]

    int longest = 1;
    int count = 1;
    int el = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] == el+1) {
            count += 1;
            el = arr[i];
        }
        else if (arr[i] != arr[i-1]) {
            count = 1;
            el = arr[i];
        }
        longest = max(longest, count);
    }

    cout << longest << endl;

    return 0;
}