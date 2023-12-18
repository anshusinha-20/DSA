/*
// Given a valid mathematical expression, find whether it have redundant parenthesis or not.
// It contain the following operators +, -, *, / .
*/
#include<iostream>
#include<stack>
using namespace std;

bool redundantParenthesis(string s, int n) {
    stack<char> st;
    bool ans = false;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            if (st.top() == '(') {
                ans = true;
                break;
            }
            while (!st.empty() && st.top() != '(') {
                st.pop();
            }
            st.pop();
        }
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    int n = s.size();

    cout << boolalpha << redundantParenthesis(s, n) << endl;

    return 0;
} 