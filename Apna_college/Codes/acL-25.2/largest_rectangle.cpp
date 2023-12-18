/*
// Given an array. Each element represents the height to the histogram's bar and the width of 
// each bar is 1, find the area of largest rectangle in the histogram.
*/

// * Brute-force: Time complexity - O(n^2)

#include<iostream>
#include<limits>
using namespace std;

void largestAreaHistogram(int arr[], int n) {
    int res = 0;
    for (int i = 0 ; i < n; i++) {
        int minH = INT_MAX;
        for (int j = i; j < n; j++) {
            minH = min(arr[j], minH);
            int len = j - i + 1;
            res = max(res, (minH * len));
        }
    }

    cout << res << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    largestAreaHistogram(arr, n);

    return 0;
}

// // * Optimal approach

// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;

// void largestAreaHistogram2(vector<int> arr, int n) {
//     int ans = 0, i = 0;
//     stack<int> st;
    
//     arr.push_back(0);

//     while (i < n) {
//         while (!st.empty() && arr[st.top()] >= arr[i]) {
//             int height = arr[st.top()];
//             st.pop();
            
//             if (st.empty()) {
//                 ans = max(ans, height*i);
//             }
//             else {
//                 int len = i - st.top() - 1;
//                 ans = max(ans, height*len);
//             }
//         }
//         st.push(i);
//         i++;
//     }
//     cout << ans << endl;
// }

// int main() {
//     int n; 
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     largestAreaHistogram2(arr, n);

//     return 0;
// }