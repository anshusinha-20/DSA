#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s, int n) { // * Time complexity: O(n)
    stack<string> st;

    for (int i = 0; i < n; i++) {
        string word = "";
        while (s[i]!= ' ' && i < n) {
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    string s;
    getline(cin, s);

    int n = s.size();

    reverseSentence(s, n);

    return 0;
}