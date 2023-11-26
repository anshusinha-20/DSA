/*
// Check palindrome
// Time complexity: O(n)
*/

// #include<iostream>
// using namespace std;

// void checkPalindrome(char arr[], int n) {
//     int low = 0, high = n-1;
//     bool flag = true;
//     while (low <= high) {
//         if (arr[low] != arr[high]) {
//             flag = false;
//             break;
//         }
//         low++;
//         high--;
//     }

//     cout << flag << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     char arr[n+1]; // * n+1 because the last character is a null character
//     cin >> arr;

//     checkPalindrome(arr, n);

//     return 0;
// }

/////-----/////

/*
// Largest word in a sentence
// Time complexity: O(n)
*/

#include<iostream>
#include<climits>
using namespace std;

void largestWord(char arr[], int n) {
    int i = 0, currLen = 0;
    int maxLen = INT_MIN;
    int st = 0, maxSt = 0;

    while (true) {
        if (arr[i] == ' ' || arr[i] == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxSt = st;
            }
            st = i+1;
            currLen = 0;
        }

        else {
            currLen++;
        }

        if (arr[i] == '\0') {
            break;
        }
        i++;
    }

    cout << maxLen << endl;
    for (int i = 0; i < maxLen; i++) {
        cout << arr[i+maxSt];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr, n+1);

    largestWord(arr, n);

    return 0;
}