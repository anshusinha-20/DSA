#include<iostream>
#include<stack>
using namespace std;

bool balancedParenthesis(string s, int n) { // * Time complexity: O(n)
    stack<char> st;

    bool answer = true;

    for (int i = 0; i < n; i++) {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
            st.push(s[i]);
        }
        else if (s[i] == ']') {
            if (!st.empty() && st.top() == '[') {
                st.pop();
            }
            else {
                answer = false;
                break;
            }
        }
        else if (s[i] == '}') {
            if (!st.empty() && st.top() == '{') {
                st.pop();
            }
            else {
                answer = false;
                break;
            }
        }
        else if (s[i] == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop();
            }
            else {
                answer = false;
                break;
            }
        }
    }

    if (!st.empty()) {
        answer = false;
    }

    return answer;
}

int main() {
    string s;
    cin >> s;

    int n = s.size();

    cout << boolalpha << balancedParenthesis(s, n) << endl;

    return 0;
}