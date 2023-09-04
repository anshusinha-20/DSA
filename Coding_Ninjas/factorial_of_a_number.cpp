// RECURSIVE APPROACH
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    //Write your code here
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}