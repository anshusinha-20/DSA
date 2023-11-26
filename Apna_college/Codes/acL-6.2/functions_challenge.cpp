#include <iostream>
#include <cmath>
using namespace std;

//bool isPrime(int n) {
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    // print all prime numbers between two given numbers
//    int num1;
//    cout << "Enter first number: ";
//    cin >> num1;
//
//    int num2;
//    cout << "Enter last number: ";
//    cin >> num2;
//
//    for (int i = num1; i <= num2; i++) {
//        if (isPrime(i)) {
//            cout << i << endl;
//        }
//    }
//
//    return 0;
//}

//void fib(int num) {
//    int t1 = 0;
//    int t2 = 1;
//    int nextTerm;
//
//    for (int i = 0; i < num; i++) {
//        cout << t1 << endl;
//        nextTerm = t1 + t2;
//        t1 = t2;
//        t2 = nextTerm;
//    }
//    return;
//}
//
//int main() {
//    // fibonacci series
//    int n;
//    cout << "Enter number of terms: ";
//    cin >> n;
//
//    fib(n);
//
//    return 0;
//}

//int factorial(int num) {
//    int fact = 1;
//    for (int i = 2; i <= num; i++) {
//        fact *= i;
//    }
//    return fact;
//}
//
//int main() {
//    // factorial of a number
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//
//    int ans = factorial(n);
//    cout << ans << endl;
//
//    return 0;
//}

//int nCr(int num) {
//    int fact = 1;
//    for (int i = 2; i <= num; i++) {
//        fact *= i;
//    }
//    return fact;
//}
//
//int main() {
//    // calculate nCr
//    int n;
//    cout << "Enter n: ";
//    cin >> n;
//
//    int r;
//    cout << "Enter r: ";
//    cin >> r;
//
//    int ans = nCr(n) / (nCr(r) * nCr(n - r));
//    cout << ans << endl;
//
//    return 0;
//}

//int nCr(int num) {
//    int fact = 1;
//    for(int i = 2; i <= num ; i++) {
//        fact *= i;
//    }
//    return fact;
//}
//
//void pasTri(int num) {
//    for (int i = 0; i < num; i++) {
//        for (int j = 0; j <= i; j++) {
//            cout << nCr(i) / (nCr(j) * nCr(i - j)) << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    // pascal's triangle with nCr
//    int n;
//    cout << "Enter number of rows: ";
//    cin >> n;
//
//    pasTri(n);
//
//    return 0;
//}
