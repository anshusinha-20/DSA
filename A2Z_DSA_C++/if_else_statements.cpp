#include<iostream>
using namespace std;

// // WRITE A PROGRAM TO INPUT AGE AND OUTPUT IF THE USER IS AN ADULT OR NOT
// int main() {
//     int x;
//     cout << "Enter your age: ";
//     cin >> x;

//     if (x < 18) {
//         cout << "You are not an adult" << endl;
//     }
//     else {
//         cout << "You are an adult" << endl;
//     }

//     return 0;
// }

// ----- //

// WRITE A PROGRAM TO INPUT THE MARKS AND OUTPUT THE GRADES ACCORDINGLY
/*
School with following rules for the grading system
a. below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
*/
#include<iostream>

int main() {
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks >= 0 && marks < 25) {
        cout << "F" << endl;
    }
    else if (marks >= 25 && marks < 45) {
        cout << "E" << endl;
    }
    else if (marks >= 45 && marks < 50) {
        cout << "D" << endl;
    }
    else if (marks >= 50 && marks < 60) {
        cout << "C" << endl;
    }
    else if (marks >= 60 && marks < 80) {
        cout << "B" << endl;
    }
    else if (marks >= 80 && marks <= 100) {
        cout << "A" << endl;
    }

    return 0;
}