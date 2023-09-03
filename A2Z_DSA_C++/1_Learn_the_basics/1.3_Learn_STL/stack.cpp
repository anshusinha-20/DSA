#include<iostream>
#include<stack>
using namespace std;

void stacks() { // stacks work on LIFO principle i.e, the element was pushed the last is the element which will be popped out first
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}

    cout << st.top() << endl; // prints the last/top element 
    st.pop(); // last/top element is popped out
    cout << st.top() << endl;

    cout << st.size() << endl; // prints the size of the stack
    cout << st.empty() << endl; // prints if the stack is empty or not i.e, 0 - False and 1 - True
}

int main() {
    stacks();

    return 0;
}