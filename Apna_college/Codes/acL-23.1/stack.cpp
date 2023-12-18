#include<iostream>
using namespace std;

#define n 100

class Stack {
    int* arr;
    int top;

    public:
        Stack() {
            arr = new int[n];
            top = -1;
        }

        void push(int x) {
            if (top == n-1) { // if top is already at the top most position in the stack, then no element can be pushed further
                cout << "Stack overflow!" << endl;
                return;
            }
            top++;
            arr[top] = x;
        }

        void pop() { // if the stack if empty
            if (top == -1) {
                cout << "Stack underflow!" << endl;
                return;
            }
            top--;
        }

        int Top() {
            if (top == -1) { // if the stack is empty
                cout << "Stack empty!" << endl;
                return -1;
            }
            return arr[top];
        }

        bool empty() {
            return top == -1;
        }
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    cout << st.Top() << endl;
    cout << boolalpha << st.empty() << endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    return 0;
}