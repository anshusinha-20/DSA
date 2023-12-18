#include<iostream>
#include<deque>
using namespace std;

void Deque() {
    deque<int> dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.pop_front();
    dq.pop_back();

    for (auto i : dq) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    Deque();
    return 0;
}