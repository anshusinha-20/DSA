/*
// 1. Reverse a string using recursion.
*/

// #include<iostream>
// #include<string>
// using namespace std;

// string reverseString(string s1, int n, int j) { // * Time complexity: O(n)
//     if (j < 0) {
//         return ""; // * return type is string, therefore ""
//     }
//     return s1[j] + reverseString(s1, n, j-1);
// }   

// int main() {
//     string s1;
//     cin >> s1;

//     int n = s1.size(), j = n-1;

//     cout << reverseString(s1, n, j) << endl;

//     return 0;
// }

/////-----/////

/*
// 2. Replace pi with 3.14 in string.
*/

// #include<iostream>
// #include<string>
// using namespace std;

// string replacePi(string s2, int n) { // * Time complexity: O(n)
//     if (n==0) {
//         return "";
//     }

//     if (s2[0] == 'p' && s2[1] == 'i') {
//         return "3.14" + replacePi(s2.substr(2), n-2);
//     }
//     else {
//         return s2[0] + replacePi(s2.substr(1), n-1);
//     }
// }

// int main() {
//     string s2;
//     cin >> s2;

//     int n = s2.size();

//     cout << replacePi(s2, n) << endl;

//     return 0;
// }

/////-----/////

/*
// 3. Tower of hanoi
//      i. Take 3 rods, A, B, C and n disks
//     ii. Move n-1 disks from A to B
//    iii. Move nth disk from A to C
//     iv. Move n-1 disks from B to C
*/

// #include<iostream>
// using namespace std;

// void TowerOfHanoi(int n, char src, char dest, char helper, int &count) { // * Time complexity: O(2^n)
//     if (n==0) {
//         return;
//     }

//     TowerOfHanoi(n-1, src, helper, dest, count);
//     cout << count++ << " - Move from " << src << " to " << dest << endl;
//     TowerOfHanoi(n-1, helper, dest, src, count);
// }

// int main() {
//     int n;
//     cin >> n;

//     int count = 1;
//     cout << endl;

//     TowerOfHanoi(n, 'A', 'C', 'B', count);

//     return 0;
// }

/////-----/////

/*
// 4. Remove all duplicates from the string.
*/

// #include<iostream>
// using namespace std;

// string removeDuplicates(string s3, int n) { // * Time complexity: O(n)
//     if (n == 0) {
//         return "";
//     }
    
//     if (s3[0] == s3[1]) {
//         return removeDuplicates(s3.substr(1), n-1);
//     }
//     else {
//         return s3[0] + removeDuplicates(s3.substr(1), n-1);
//     }
// }

// int main() {
//     string s3;
//     cin >> s3;

//     int n = s3.size();

//     cout << removeDuplicates(s3, n) << endl;

//     return 0;
// }

/////-----/////

/*
// 5. Move all x to the end of the string
*/

// #include<iostream>
// using namespace std;

// string moveAllXAtEnd(string s4, int n) { // * Time complexity: O(n)
//     if (n==0) {
//         return "";
//     }

//     if (s4[0] == 'x') {
//         return moveAllXAtEnd(s4.substr(1), n-1) + 'x';
//     }
//     else {
//         return s4[0] + moveAllXAtEnd(s4.substr(1), n-1);
//     }
// }

// int main() {
//     string s4;
//     cin >> s4;

//     int n = s4.size();

//     cout << moveAllXAtEnd(s4, n) << endl;

//     return 0;
// }

/////-----/////

/*
// 6. Generate all sub-strings of a string.
*/

#include<iostream>
using namespace std;

void generateSubString(string s5, int n, string ans) {
    if (n == 0) {
        cout << ans << endl;
        return;
    }
    generateSubString(s5.substr(1), n-1, ans);
    generateSubString(s5.substr(1), n-1, ans+s5[0]);

}

int main() {
    string s5;
    cin >> s5;

    int n = s5.size();
    string ans = "";

    generateSubString(s5, n, ans);

    return 0;
}