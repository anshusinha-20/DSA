/*
The span of the stock's price today is defined as the maximum number of consecutive days
(starting from today and going backwards) for which the price of the stocks was less than or equal to today's
price.
Find the  span of the stocks for all the days.
*/

// // * Brute force approach: Time complexity - O(n^2)

// #include<iostream>
// using namespace std;

// void stockSpan(int arr[], int n) {
//     int days;
//     for (int i = 0; i < n; i++) {
//         days = 0;
//         for (int j = i; j < n; j--){
//             if(arr[j] <= arr[i]) {
//                 days++;
//             }
//             else {
//                 break;
//             }
//         }
//     }
//     cout << days << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     stockSpan(arr, n);

//     return 0;
// } 

/////-----/////

#include<iostream>
#include<stack>
using namespace std;

void stockSpan2(int arr[], int n) {
    stack< pair <int, int> > st;
    int days = 1;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top().first <= arr[i]) {
            days += 1;
            st.pop();
        }
        st.push(make_pair(arr[i], days));
        cout << days << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stockSpan2(arr, n);

    return 0;
}