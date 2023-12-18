#include<iostream>
using namespace std;

#define n 100

class Queue {
    int* arr;
    int front, back;

    public:
        Queue() {
            arr = new int[n];
            front = -1;
            back = -1;
        }

        void enqueue(int x) {
            if (back == n-1) {
                cout << "Queue overflow!" << endl;
                return;
            } 
            back++;
            arr[back] = x;

            if (front == -1) {
                front++;
            }
        }

        void dequeue() {
            if (front == -1 || front > back) {
                cout << "Queue underflow!" << endl;
                return;
            }
            front++;
        }

        int peek() {
            if (front == -1 || front > back) {
                cout << "Queue empty!" << endl;
                return -1;
            }
            return arr[front];
        }

        bool empty() {
            return (front == -1 || front > back);
        }
};  

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.dequeue();

    cout << q.peek() << endl;

    cout << boolalpha << q.empty() << endl;

    return 0;
}