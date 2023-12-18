#include<iostream>
using namespace std;

int main() {
    int a = 10; // * stored in stack

    int *p = new int(); // * allocate memory in heap
    *p = 10; // * act as global variable
    delete(p); // * deallocate memory

    p = new int[4]; // * allocate an int array of size 4 in heap
    delete[]p;

    p = NULL; // * remove p

    return 0;
}