#include<iostream>
#include<stack>
using namespace std;

////    (a-b/c)*(a/k-l) 

void reverseString(string &s, int n) {
    int start = 0;
    int end = n-1;

    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

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

string infixToPrefix(string s, int n) {
    stack<char> st;
    string res;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            res += s[i];
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

    reverseString(res, res.size());
    return res;
}

int main() {
    string s;
    cin >> s;

    int n = s.size();
    reverseString(s, n);

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            s[i] = ')';
        }
        else if (s[i] == ')') {
            s[i] = '(';
        }
    }

    cout << infixToPrefix(s, n) << endl;

    return 0;
}