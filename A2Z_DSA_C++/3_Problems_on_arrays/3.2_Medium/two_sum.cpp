#include<iostream>
#include<utility>
#include<map>
using namespace std;

// // BRUTE APPROACH: time complexity - o(n^2), space complexity - o(1)
// int main() {
//     int n; // number of elements in the array
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) { // filling the array with the eleements
//         cin >> arr[i];
//     }

//     int k; // the required sum
//     cin >> k;

//     pair<int, int> p;
//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i+1; j < n; j++) {
//             sum = arr[i] + arr[j];
//             if (sum == k) {
//                 p.first = arr[i];
//                 p.second = arr[j];
//                 break;
//             }
//         }
//     }

//     if (p.first != -1 && p.second != -1) {
//         cout << "yes" << endl;
//     }
//     else {
//         cout << "no" << endl;
//     }

//     return 0;
// }

// // BETTER APPROACH: time complexity - o(nlogn), space complexity - o(n)
// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int k;
//     cin >> k;

//     map<int, int> m;
//     string ans = "no";
//     for (int i = 0; i < n; i++) {
//         m[arr[i]] = i;
//         if (m.find(k-arr[i]) != m.end()) { // 14 - 6 = 8, if 8 exits in the map, return yes
//             ans = "yes";
//             break;
//         }
//     }

//     cout << ans << endl;

//     return 0;

// }

// OPTIMAL APPROACH: time complexity  - o(n), space complexity - o(1), sorting - o(nlogn)
int partitionArray(int input[], int start, int end) {
	// Write your code here
	int pivot = input[start];
	int i = start;
	int j = end;

	while (i < j) {
		while (input[i] <= pivot && i <= end) {
			i += 1;
		}
		while (input[j] > pivot && j >= start) {
			j -= 1;
		}
		if (i < j) {
			swap(input[i], input[j]);
		}
	}
	swap(input[start], input[j]);
	return j;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if (start < end) {
		int p_index = partitionArray(input, start, end);
		quickSort(input, start, p_index - 1);
		quickSort(input, p_index + 1, end);
	}
}
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);

    int k;
    cin >> k;

    string ans = "no";

    int i = 0;
    int j = n-1;
    while (i < j) {
        if (arr[i] + arr[j] == k) {
            ans = "yes";
            break;
        }
        else if (arr[i] + arr[j] < k) {
            i++;
        }
        else {
            j--;
        }
    }

    cout << ans << endl;

    return 0;
}
