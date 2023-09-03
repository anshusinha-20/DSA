#include<iostream>
using namespace std;

int main() {
    // integer data type
    int x;
    cout << "Enter value of x: ";
    cin >> x;

    long x2;
    cout << "Enter value of x2: ";
    cin >> x2;

    long long x3;
    cout << "Enter value of x3: ";
    cin >> x3;

    // ----- //

    // decimal data type
    float y;
    cout << "Enter value of y: ";
    cin >> y;

    double y2;
    cout << "Enter value of y2: ";
    cin >> y2;

    // ----- //

    // string data type
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string s2, s3;
    cout << "Enter two strings separeted by a space: ";
    cin >> s2 >> s3;
    cout << s2 << " " << s3 << endl;

    string s4;
    cout << "Enter a string: ";
    getline(cin, s4);  // getting entire line of string
    cout << s4 << endl;

    // ----- //

    // character datatype for single string input
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << c << endl;

    return 0;
}