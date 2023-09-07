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

// ITERATIVE APPROACH
#include<iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin >> n;
    int prod = 1;

    if (n > 0) {
        for (int i = n; i > 0; i -= 1) {
            prod *= i;
        }
        cout << prod;
    }

    else if (n == 0) {
        cout << 1;
    }

    else {
        cout << "Error";
    }

    return 0;
}