//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for (int i = n; i > 0; i -= 1) {
            for (int j = i - 1; j > 0; j -= 1) {
                cout << " ";
            }
            for (int k = 0; k < n - i + 1; k += 1) {
                cout << "* ";
            }
            cout << endl;
        }
        for (int i = n; i > 0; i -= 1) {
            for (int j = 0; j < n - i; j += 1) {
                cout << " ";
            }
            for (int k = i; k > 0; k -= 1) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends