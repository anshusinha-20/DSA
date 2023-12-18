#include<iostream>
using namespace std;

#define n 100

class Stack {
    int* arr;
    int top;

    public :
        Stack() {
            arr = new int[n];
            top = -1;
        }

        void push(int x) {
            if (top == n-1) {
                cout << "Stack overflow!" << endl;
                return;
            }
            top++;
            arr[top] = x;
        }

        void pop() {
            if (top == -1) {
                cout << "Stack underflow!" << endl;
                return;
            }
            top--;
        }

        int Top() {
            if (top == -1) {
                cout << "Stack empty!" << endl;
                return -1;
            }
            return arr[top];
        }

        bool empty() {
            return top==-1;
        }
};

void insertAtBottom(Stack &st, int ele) {
    if (st.empty()) {
        st.push(ele);
        return;
    }
    int topEle = st.Top();
    st.pop();
    insertAtBottom(st, ele);
    st.push(topEle);
}

void reverseStack(Stack &st) {
    if (st.empty()) {
        return;
    }
    int ele = st.Top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, ele);
}

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << "Before: ";
    while (!st.empty()) {
        cout << st.Top() << " ";
        st.pop();
    }   
    cout << endl;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverseStack(st);
    cout << "After: ";
    while (!st.empty()) {
        cout << st.Top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}