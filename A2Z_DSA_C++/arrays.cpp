// // 1D ARRAY
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5];

//     cout << "Enter 5 array elements: ";
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     cout << arr[0] << endl;

//     return 0;
// }

// ----- //

// 2D ARRAY
#include<iostream>
using namespace std;

int main() {
    int arr2D[3][5];  // array with 3 rows and 5 columns

    arr2D[1][2] = 32;
    cout << arr2D[1][2] << endl;
    cout << arr2D[0][1] << endl;  // garbage value
    cout << arr2D[1][3] << endl;  // garbage value

    return 0;
}