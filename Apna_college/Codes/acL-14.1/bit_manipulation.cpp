/*
// 1. Get bit
*/

// #include<iostream>
// using namespace std;

// int getBit(int n, int pos) { // * Time complexity: O(1)
//     return (n & (1<<pos));
// }

// int main() {
//     int n, pos;
//     cin >> n >> pos;

//     cout << getBit(n, pos) << endl;

//     return 0;
// }

/////-----/////

/*
// 2. Set bit
*/

// #include<iostream>
// using namespace std;

// int setBit(int n, int pos) { // * Time complexity: O(1)
//     return (n | (1 << pos));
// }

// int main() {
//     int n, pos;
//     cin >> n >> pos;

//     cout << setBit(n, pos) << endl; // print the number formed after 'or' operation

//     return 0;
// }

/////-----/////

/*
// 3. Clear bit
*/

// #include<iostream>
// using namespace std;

// int clearBit(int n, int pos) { // * Time complexity: O(1)
//     return (n & ~(1 << pos)); // * ~ to get one's complement
// }

// int main() {
//     int n, pos;
//     cin >> n >> pos;

//     cout << clearBit(n , pos) << endl;

//     return 0;
// }

/////-----/////

/*
// 4. Update bit
*/

#include<iostream>
using namespace std;

int updateBit(int n, int pos, int val) { // * Time complexity: O(1)
    n = n & ~(1<<pos);
    return (n | (val << pos));
}

int main() {
    int n, pos, val;
    cin >> n >> pos >> val;

    cout << updateBit(n, pos, val) << endl; 

    return 0;
}