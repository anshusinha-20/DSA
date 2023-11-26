#include <iostream>
using namespace std;

int main() {
    // pattern problem 1. rectangle pattern
//    // brute force
//    int row, col;
//    cout << "Enter number of rows: ";
//    cin >> row;
//    cout << "Enter number of columns: ";
//    cin >> col;
//
//    for (int i = 1; i <= row; i++) {
//        for (int j = 1; j <= col; j ++) {
//            cout << '*';
//        }
//        cout << endl;
//    }

    // pattern problem 2. Hollow rectangle pattern
//    int row, col;
//    cout << "Enter number of rows: ";
//    cin >> row;
//    cout << "Enter number of columns: ";
//    cin >> col;
//
//    for (int i = 1; i <= row; i++) {
//        for (int j = 1; j <= col; j++) {
//            if (i == 0 || i == row || j == 0 || j == col) {
//                cout << '*';
//            }
//            else {
//                cout << ' ';
//            }
//        }
//        cout << endl;
//    }
//    // pattern problem 3. Inverted half-pyramid
//    int row;
//    cout << "Enter number of rows: ";
//    cin >> row;
//
//    for (int i = row; i >= 1; i--) {
//        for (int j = 1; j <= i; j++) {
//            cout << '*';
//        }
//        cout << endl;
//    }

    // pattern problem 4.
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (j <= n - i) {
//                cout << ' ';
//            }
//            else {
//                cout << '*';
//            }
//        }
//        cout << endl;
//    }

    // pattern problem 4.
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << i;
//        }
//        cout << endl;
//    }

    // pattern problem 5. Floyd's triangle
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//
//    int count = 1;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << count << ' ';
//            count += 1;
//        }
//        cout << endl;
//    }

    // pattern problem 6. Butterfly pattern
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int space;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        space = 2 * n - 2 * i;
        for (int k = 1; k <= space; k++) {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        space = 2 * n - 2 * i;
        for (int k = 1; k <= space; k++) {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
