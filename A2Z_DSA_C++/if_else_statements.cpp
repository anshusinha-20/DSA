#include<iostream>
using namespace std;

// WRITE A PROGRAM TO INPUT AGE AND OUTPUT IF THE USER IS AN ADULT OR NOT
int main() {
    int x;
    cout << "Enter your age: ";
    cin >> x;

    if (x < 18) {
        cout << "You are not an adult" << endl;
    }
    else {
        cout << "You are an adult" << endl;
    }

    return 0;
}