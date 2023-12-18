/*
// * 1. Add all number till n.
*/

// #include<iostream>
// using namespace std;

// int sumTillN(int n) { // * Time complexity: O(n)
//     if (n==0) // ! if n == 0, return 0
//         return 0;
//     return n + sumTillN(n-1);
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << sumTillN(n) << endl;

//     return 0;
// }

/////-----/////

/*
// 2. Calculate n raised to power of p.
*/

// #include<iostream>
// using namespace std;

// int nRaisedToP(int n, int p) { // * Time complexity: O(p)
//     if (p == 0) {
//         return 1;
//     }
//     return n * nRaisedToP(n, p-1);
// }

// int main() {
//     int n, p;
//     cin >> n >> p;

//     cout << nRaisedToP(n, p) << endl;

//     return 0;
// }

/////-----/////

/*
// 3. Find factorial of a number.
*/

// #include<iostream>
// using namespace std;

// int fact(int n) { // * Time complexity: O(n)
//     if (n == 0) {
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << fact(n) << endl;

//     return 0;
// }

/////-----/////

/*
// 4. Print the nth Fibonacci number.
*/

#include<iostream>
using namespace std;

int nthFibonacci(int n) { // * Time complexity: O(2^n)
    if (n == 0 || n == 1)
        return n;
    return nthFibonacci(n-1) + nthFibonacci(n-2);
}

int main() {
    int n;
    cin >> n;

    cout << nthFibonacci(n) << endl;

    return 0;
}