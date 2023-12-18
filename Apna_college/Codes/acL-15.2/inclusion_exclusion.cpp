/*
// 1. Find the number of numbers in the interval [1,n] which are divisible by a or b.
*/

// #include<iostream>
// using namespace std;

// int divisible(int n, int a, int b) { // * Time complexity: O(1)
//     int c1 = n/a;
//     int c2 = n/b;
//     int c3 = n /(a*b);

//     return c1+c2-c3;
// }

// int main() {
//     int n, a, b;
//     cin >> n >> a >> b;

//     cout << divisible(n, a, b) << endl;

//     return 0;
// }

/////-----/////

/*
// 2. Euclid algorithm to find GCD.
*/

#include<iostream>
using namespace std;

int findGCD(int a, int b) { // * Time complexity: O(log min(a, b))
    while (b) {
        int rem = a%b;
        a = b;
        b = rem;
    }

    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << findGCD(a, b) << endl;

    return 0;
}