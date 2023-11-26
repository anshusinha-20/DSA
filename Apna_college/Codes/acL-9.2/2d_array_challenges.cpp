/*
// 1. Given a square matrix A & its number of rows (or columns) N, return the transpose of A.
// The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.
// Time complexity: O(nm)
*/

// #include<iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     int arr[n][m];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Original matrix:" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // * transpose transformation
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < m; j++) {
//             if (i != j) {
//                 int temp = arr[i][j];
//                 arr[i][j] = arr[j][i];
//                 arr[j][i] = temp;
//             }
//         }
//     }

//     cout << "Matrix after transpose:" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/////-----/////

/*
// Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. 
// Your task is to multiply these matrices and output the multiplied matrix.
// Time complexity: O(nmp)
*/

// #include<iostream>
// using namespace std;

// int main() {
//     int n, m, p;
//     cin >> n >> m >> p;

//     int arr1[n][m];
//     cout << "Enter elements for arr1 with n rows and m columns:" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr1[i][j];
//         }
//     }

//     int arr2[m][p];
//     cout << "Enter elements for arr2 with m rows and p columns:" << endl;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < p; j++) {
//             cin >> arr2[i][j];
//         }
//     }

//     int arr3[n][p];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < p; j++) {
//             arr3[i][j] = 0;
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < p; j++) {
//             for (int k = 0; k < m; k++) {
//                 arr3[i][j] += arr1[i][k] * arr2[k][j];
//             }
//         }
//     }

//     cout << "Matrix after multiplication:" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < p; j++) {
//             cout << arr3[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/////-----/////

/*
// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix or not. Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.
// Time complexity: O(n)
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int key;
    cin >> key;

    string flag = "Not found!";
    int i = 0, j = m-1; // * start from the top-right corner
    while (i < n && j >= 0) {
        if (key == arr[i][j]){
            flag = "Found!";
            break;
        }
        else if (key < arr[i][j]) { // * if element is smaller, go left
            j--;
        }
        else { // * if element is bigger, go down
            i++; 
        }
    }

    cout << flag << endl;

    return 0;
}