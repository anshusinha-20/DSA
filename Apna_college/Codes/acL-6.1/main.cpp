#include <iostream>
using namespace std;

int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    int num2;
    cout << "Enter another number: ";
    cin >> num2;

    cout << add(num1, num2) << endl;

    return 0;
}
