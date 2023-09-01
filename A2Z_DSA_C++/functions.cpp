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

// // FUNCTION TO RETURN THE MAX OF TWO NUMBERS
// #include<iostream>
// using namespace std;

// int max(int num1, int num2) {
//     if (num1 > num2) {
//         return num1;
//     }
//     return num2;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "The greatest between " << num1 << " and " << num2 << " is: " << max(num1, num2) << endl;
// }

// ----- //

// // PASS BY VALUE
// #include<iostream>
// using namespace std;

// void random_stuff(int num) {
//     cout << num << endl;
//     num += num;
//     cout << num << endl;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     random_stuff(num);  // sends a copy of the original num to the random_stuff function
//     cout << num << endl;  // will print 5

//     return 0;
// }

// PASS BY REFERENCE
#include<iostream>
using namespace std;

void random_stuff2(int &num) {  // got the original address of the 'num' value
    num += 5;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    random_stuff2(num);
    cout << num << endl;  // modified value of num will be printed

    return 0;
}