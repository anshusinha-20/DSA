#include<iostream>
#include<set>
using namespace std;

void multisets() {
    multiset<int> ms; // multiset can store duplicate elements in sorted order fashion
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(2); // {1, 1, 2}
    ms.insert(0); // {0, 1, 1, 2}

    ms.erase(1); // erases all occurences of 1
    ms.erase(ms.find(1)); // erase only the specified element

    // rest all functions are similar to set
}

int main() {
    multisets();

    return 0;
}