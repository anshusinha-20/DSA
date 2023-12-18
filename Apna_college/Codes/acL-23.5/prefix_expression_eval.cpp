#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

////    - + 7 * 4 5 + 2 0

int prefixEval(string s, int n) {
    stack<int> st;

    for (int i = n-1; i >= 0; i--) {
        if (s[i] >= '0' && s[i] <= '9') {
            st.push(s[i]-'0');
        }
        else {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i]) {
                case '+':
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                case '/':
                    st.push(op1 / op2);
                    break;
                case '^':
                    st.push(pow(op1, op2));
                    break;
                default:
                    break;
            }
        }
    }

    return st.top();
}

int main() {
    string s;
    getline(cin, s);

    int n = s.size();

    cout << prefixEval(s, n) << endl;

    return 0;
}