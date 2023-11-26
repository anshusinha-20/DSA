#include<iostream>
using namespace std;

void swapNum(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    // int a = 10;
    // int* aptr = &a;

    // cout << aptr << endl;
    // cout << *aptr << endl;

    // *aptr = 20;
    // cout << a  << endl;

    // aptr++;
    // cout << aptr << endl;
    // aptr--;
    // cout << aptr << endl;
    // // *aptr++; // * not possible
    // // cout << a << endl;
    // // cout << *aptr << endl;

    // int arr[] = {1, 2, 3};
    // int* ptr = arr;
    // for (int i = 0; i < 3; i++) {
    //     // cout << *ptr << endl;
    //     // ptr++;
    //     cout << *(arr+i) << endl; // indexing pointer, not memory pointer
    // }

    // // * pointer to pointer

    // int a = 10;
    // int* ptr = &a;
    // int** q = &ptr; // * pointer to pointer

    // cout << q << endl; // value of q 
    // cout << *q << endl; // value of ptr
    // cout << **q << endl; // value of a 

    // * pass by reference

    int a, b;
    cin >> a >> b;

    int* aptr = &a;
    int* bptr = &b;

    swapNum(aptr, bptr);

    cout << a << " " << b << endl;

    return 0;
}