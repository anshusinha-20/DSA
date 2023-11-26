// // * Printing 2D-array
// // * Time complexity: O(nm)

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
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/////-----/////

// // * Searching in a 2D-array
// // * Time complexity: O(nm)

// #include<iostream>
// #include<string>
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

//     int x;
//     cin >> x;
//     string flag = "Element not found!";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] == x) {
//                 flag = "Element found";
//                 break;
//             }
//         }
//     }

//     cout << flag << endl;

//     return 0;
// }

/////-----/////

// * Printing of 2D-array in spiral order
/*
- - - - - 
        |
|- - -  |
|    |  |
- - - - |   
*/
/*
1 5 7 9 10 11
6 10 12 13 20 21
9 25 29 30 32 41
15 55 59 63 68 70
40 70 79 81 95 105
*/
// * Time complexity: O(nm)

#include<iostream>
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

    int rowStart = 0, rowEnd = n-1, colStart = 0, colEnd = m-1;

    while (rowStart <= rowEnd && colStart <= colEnd) {
        // for rowStart
        for (int col = colStart; col <= colEnd; col++) {
            cout << arr[rowStart][col] << " ";
        }
        rowStart++;

        // for colEnd
        for (int row = rowStart; row <= rowEnd; row++) {
            cout << arr[row][colEnd] << " ";
        }
        colEnd--;

        // for rowEnd
        for (int col = colEnd; col >= colStart; col--) {
            cout << arr[rowEnd][col] << " ";
        }
        rowEnd--;

        // for colStart
        for (int row = rowEnd; row >= rowStart; row--) {
            cout << arr[row][colStart] << " ";
        }
        colStart++;
    }

    return 0;
}
