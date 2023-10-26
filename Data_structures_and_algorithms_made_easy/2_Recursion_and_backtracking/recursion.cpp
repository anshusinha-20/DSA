// // calculate factorial of a positive integer
// #include<iostream>
// using namespace std;

// int factorial(int n) {
//     if (n == 0)
//         return 1;
//     else    
//         return n*factorial(n-1);
// }

// int main() {
//     int n;
//     cin >> n;

//     int result = factorial(n);

//     cout << result << endl;

//     return 0;
// }

/////-----/////

// // p1: towers of hanoi

// #include<iostream>
// using namespace std;

// void towers_of_hanoi(int n, int &source, int &auxiliary, int &destination) {
//     if (n==1) { // move disk 1 from source to destination tower
//         cout << "\nMove disk 1 from source tower with " << source 
//         << " disks to destination tower with " << destination << " disks\n" << endl;
//         source--;
//         destination++;
//         return;
//     } 
//     else {
//         // move n-1 disks from source tower to auxiliary tower
//         towers_of_hanoi(n-1, source, destination, auxiliary);

//         cout << "\nMove " << n <<"th disk from source tower with " << source << " disks to destination tower with " << destination << " disks\n" << endl; 
//         source--;
//         destination++;

//         // move n-1 disks from auxiliary tower to destination tower
//         towers_of_hanoi(n-1, auxiliary, source, destination);
//     }
// }

// int main() {
//     cout << endl;
//     int n;
//     cin >> n;

//     int source=n, auxiliary=0, destination=0;

//     cout << "\nBefore solving Towers of Hanoi:\n" 
//     << "\tDisks in source tower: " << source << "\n" 
//     << "\tDisks in destination tower: " << destination << endl;

//     towers_of_hanoi(n, source, auxiliary, destination);

//     cout << "\nAfter solving Towers of Hanoi:\n" 
//     << "\tDisks in source tower: " << source << "\n" 
//     << "\tDisks in destination tower: " << destination << '\n' << endl;

//     return 0;
// }

/////-----/////

// p2: to check whether an array is sorted or not

#include<iostream>
#include<iomanip>
using namespace std;

bool is_array_sorted(int arr[], int n) {
    if (n==1) 
        return true;
    else 
        return (arr[n-1] > arr[n-2])?is_array_sorted(arr, n-1):false;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool result = is_array_sorted(arr, n);

    cout << boolalpha << result << endl;

    return 0;
}