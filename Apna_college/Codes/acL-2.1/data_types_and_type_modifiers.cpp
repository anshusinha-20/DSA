#include <iostream>
using namespace std;

int main() {
    int a; //declaration
    a = 12; //initialisation

    cout << "size of int is " << sizeof(a) << " bytes" << endl;

    float b;
    cout << "size of float is " << sizeof(b) << " bytes" << endl;

    char c;
    cout << "size of char is " << sizeof(c) << " bytes" << endl;

    bool d;
    cout << "size of bool is " << sizeof(d) << " bytes" << endl;

    short int si;
    long int li;
    cout << "size of short int is " << sizeof(si) << " bytes" << endl;
    cout << "size of long int is " << sizeof(li) << " bytes" << endl;

    return 0;
}

