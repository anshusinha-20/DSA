#include<iostream>
#include<list>
using namespace std;

void lists() {
    list<int> l1;
    l1.emplace_back(2); // {2}
    l1.emplace_front(3); // {3, 2}

    for (auto i : l1) {
        cout << i << " "; // 3 2
    }
    cout << endl;

    // rest functions are similar to vectors
}

int main() {
    lists();

    return 0;
}