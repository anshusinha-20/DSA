// // PARAMETERISED VOID FUNCTION
// #include<iostream>
// using namespace std;

// void greet(string name) {
//     cout << "hello " << name << endl;
// }

// int main() {
//     string name;
//     cin >> name;
//     greet(name);

//     return 0;
// }

// ----- //

// // PARAMETERISED RETURN FUNCTION
// #include<iostream>
// using namespace std;

// int sum(int num1, int num2) {
//     return num1 + num2;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two integers: ";
//     cin >> num1 >> num2;
//     cout << "Sum of " << num1 << " and " << num2 << " is: " << sum(num1, num2) << endl;

//     return 0;
// }

// ----- //
// FUNCTION TO RETURN THE MAX OF TWO NUMBERS
#include<iostream>
using namespace std;

int max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    }
    return num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The greatest between " << num1 << " and " << num2 << " is: " << max(num1, num2) << endl;
}