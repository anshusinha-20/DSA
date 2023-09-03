#include<iostream>
#include<queue>
using namespace std;

void queues() { // queues work on the FIFO principle i.e, the element which was pushed first is the element which is popped out first
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(3); // {1, 2, 3}
    q.push(4); // {1, 2, 3, 4}
    q.push(5); // {1, 2, 3, 4, 5}

    cout << q.front() << endl; // 1
    cout << q.back() << endl; // 5
    q.pop(); // 1
    cout << q.front() << endl; // 2
}

int main() {
    queues();

    return 0;
}