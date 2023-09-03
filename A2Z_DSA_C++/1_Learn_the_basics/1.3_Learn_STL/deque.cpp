#include<iostream>
#include<deque>
using namespace std;

void deques() {
    deque<int> d;
    d.emplace_back(1);
    d.emplace_front(2);

    for (auto i : d) {
        cout << i << " ";
    }
    cout << endl;

    // rest functions are similar to vectors
}

int main() {
    deques();

    return 0;
}