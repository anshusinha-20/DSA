#include<iostream>
#include<stack>
using namespace std;

////    (a-b/c)*(a/k-l)    

int prec(char c) {
    if (c == '^') {
        return 3;
    }
    else if (c == '*' || c == '/') {
        return 2;
    }
    else if (c == '+' || c == '-') {
        return 1;
    }
    else {
        return -1;
    }
}

string infixToPostfix(string s, int n) {
    stack<char> st;
    string res;

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            res += s[i];
        }
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
            res += st.top();
            st.pop();
            }
            if (!st.empty()) {
                st.pop();
            }
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
            while (!st.empty() && prec(st.top()) > prec(s[i])) {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    return res;
}

int main() {
    string s;
    cin >> s;

    int n = s.size();

    cout <<  infixToPostfix(s, n) << endl;

    return 0;
}