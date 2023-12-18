/*
// 1. Sieve of Eratosthenes - find prime numbers till n
*/

// #include<iostream>
// using namespace std;

// const int MAX_SIZE = 1000;

// void primeSieve(int n) { // * Time complexity: O(n log log n)
//     int prime[MAX_SIZE] = {0}; // made an array of size 51, because 0 till 50
//     for (int i = 2; i <= n; i++) { // starting with the first prime number, 2 till n
//         if (prime[i] == 0) { // if the element has not been marked
//             for (int j = i * i; j <= n; j += i) { // starting with the square of the prime number and marking all its multiples
//                 prime[j] = 1;
//             }
//         }
//     }

//     for (int i = 2; i <= n; i++) {
//         if (prime[i] == 0) { // check if the number still has not been marked yet
//             cout << i << " "; // if not so, then the number is prime, print it out
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     primeSieve(n);

//     return 0;
// }

/////-----/////

/*
// 2. Prime factors of a number.
*/

#include<iostream>
using namespace std;

void primeFactorsSieve(int n) {

}

int main() {
    int n;
    cin >> n;

    primeFactorsSieve(n);

    return 0;
}