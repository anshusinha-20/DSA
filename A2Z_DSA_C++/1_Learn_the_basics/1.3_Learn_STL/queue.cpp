#include<iostream>
#include<queue>
using namespace std;

void queues() { // queues work on the FIFO principle i.e, the element which was pushed first is the element which is popped out first
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.front() << endl;
    cout << q.back() << endl;
}

int main() {
    queues();

    return 0;
}