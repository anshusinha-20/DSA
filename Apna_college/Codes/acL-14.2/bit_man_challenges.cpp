/*
// 1. Write a program to check if a given number is power of 2.
// Time complexity: O(1)
*/

// #include<iostream>
// using namespace std;

// bool isPowerOf2(int n) { // will return true iff n has one 1 set bit and n-1 has all set bits after that position
//     return (n && !(n & n-1)); // * if n = 0 then the whole expression will become zero, therefore 'n &&' is put to compare
// }

// int main() {
//     int n; 
//     cin >> n;
//     cout << boolalpha << isPowerOf2(n) << endl;

//     return 0;
// }

/////-----/////

/*
// 2. Write a program to count the number of ones in binary representation of a number.
*/

// #include<iostream>
// using namespace std;

// void numOfOnes(int n) { // * Time complexity: O(n)
//     int count = 0;
//     while (n) {
//         count++;
//         n = n & (n-1);
//     }

//     cout << count << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     numOfOnes(n);
//     return 0;
// }

/////-----/////

/*
// 3. Write a program to generate all possible subsets of a set.
*/

#include<iostream>
#include<cmath>
using namespace std;

void possibleSubsets(int n, char arr[]) {
    for (int i = 0; i < 1<<n; i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1<<j)) {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    possibleSubsets(n , arr);

    return 0;
}