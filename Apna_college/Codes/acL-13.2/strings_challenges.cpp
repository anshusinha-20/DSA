/*
// 1. Convert given string to uppercase or lowercase
// Time complexity: O(n)
*/

// #include<iostream>
// #include<string>
// using namespace std;

// void strToUpper(string &s1) {
//     // cout << 'a' - 'A' << endl; // * 32, i.e, small 'a' is 32 units bigger than big 'A' in ascii value
//     for (int i = 0; i < s1.size(); i++) {
//         if (s1[i] >= 'a' && s1[i] <= 'z')
//             s1[i] -= 32;
//     }

//     cout << s1 << endl;
// }

// void strToLower(string &s1) {
//     for (int i = 0; i < s1.size(); i++) {
//         if (s1[i] >= 'A' && s1[i] <= 'Z') 
//             s1[i] += 32;
//     }

//     cout << s1 << endl;
// }

// int main() {
//     string s1;
//     cin >> s1;

//     strToUpper(s1);
//     strToLower(s1);
        
//     return 0;
// }

/////-----/////

/*
// 2. From the biggest number from the numeric string
// Ex: 53125 -> 55321
// Time complexity: O(nlogn)
*/

// #include<iostream>
// #include<string>
// using namespace std;

// void formBiggestNumStr(string s1) {
//     sort(s1.begin(), s1.end(), greater<int>()); // sorting from greatest to smallest
//     cout << s1 << endl;
// }

// int main() {
//     string s1;
//     cin >> s1;

//     formBiggestNumStr(s1);

//     return 0;
// }

/////-----/////

/*
// 3. Find the highest frequency of a character from a given string
*/

#include<iostream>
#include<string>
#include<climits>
using namespace std;

// void highestFreq1(string s1, int n) { // * Time complexity: O(n^2)
//     int maxN = INT_MIN;
//     int highest;

//     for (int i = 0; i < n; i++) {
//         char c = s1[i];
//         highest = 0;
//         for (int j = 0; j < n; j++) {
//             if (c == s1[j]) {
//                 highest += 1;
//             }
//         }
//         maxN = max(maxN, highest);
//     }   

//     cout << maxN << endl;
// }

void highestFreq2(string s1, int n) { // * Time complexity: O(n)
    int freq[26];
    for (int i = 0; i < 26; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        freq[s1[i]-'a']++; // * 'b' - 'a' = 1
    }

    int maxN = INT_MIN;
    char ans = 'a';

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxN) {
            maxN = freq[i];
            ans = i + 'a';
        }
    }

    cout << maxN << " " << ans << endl;
}

int main() {
    string s1;
    cin >> s1;

    int n = s1.size();

    // highestFreq1(s1, n);
    highestFreq2(s1, n);

    return 0;
}