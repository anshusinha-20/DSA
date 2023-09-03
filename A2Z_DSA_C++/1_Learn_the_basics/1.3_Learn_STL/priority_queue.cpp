#include<iostream>
#include<queue>
using namespace std;

void priority_queues() { // priority queue by default is set to max i.e, while pushing the element, it keeps the element in a descending order fashion
    priority_queue<int> pq;
    pq.push(1); // {1}
    pq.push(3); // {3, 1}
    pq.push(2); // {3, 2, 1}
    pq.push(0); // {3, 2, 1, 0}
    pq.push(5); // {5, 3, 2, 1, 0}

    cout << pq.top() << endl; // 5
    pq.pop(); // 5
    cout << pq.top() << endl; // 3 

    // MIN PRIORITY_QUEUE
    priority_queue<int, vector<int>, greater<int>> mpq; // element are arranged in an ascending order fashion
    mpq.push(1); // {1}
    mpq.push(3); // {1, 3}
    mpq.push(2); // {1, 2, 3}
    mpq.push(0); // {0, 1, 2, 3}
    mpq.push(5); // {0, 1, 2, 3, 5}

    cout << mpq.top() << endl; // 0
}

int main() {
    priority_queues();

    return 0;
}