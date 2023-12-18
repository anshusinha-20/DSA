#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = NULL;
        }
};

class Queue {
    Node* front;
    Node* back;

    public:
        Queue() {
            front = NULL;
            back = NULL;
        }

        void enqueue(int x) {
            Node* n = new Node(x);

            if (front == NULL) {
                front = n;
                back = n;
            }
            back->next = n;
            back = n;
        }

        void dequeue() {
            if (front == NULL) {
                cout << "Queue underflow!" << endl;
                return;
            }
            Node* toDelete = front;
            front = front->next;
            delete toDelete;
        }

        int peek() {
            if (front == NULL) {
                cout << "Queue empty!" << endl;
                return -1;
            }
            return front->data;
        }

        bool empty() {
            return (front == NULL);
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