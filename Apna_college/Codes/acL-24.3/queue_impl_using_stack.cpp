#include<iostream>
#include<stack>
using namespace std;

class Queue {
    stack<int> s1;
    stack<int> s2;

    public:
        void enqueue(int x) {
            s1.push(x);
        }
        
        void dequeue() {
            if (s1.empty() && s2.empty()) {
                cout << "Queue underflow!" << endl;
                return;
            }
            else if (s2.empty()) {
                while(!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            s2.pop();
        }

        int peek() {
            if (s1.empty() && s2.empty()) {
                cout << "Queue empty!" << endl;
                return -1;
            }
            else if (s2.empty()) {
                while (!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            return s2.top();
        }

        bool empty() {
            return (s1.empty() && s2.empty());
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