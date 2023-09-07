//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for (int i = n; i > 0; i -= 1) {
            for (int j = 1; j <= n - i + 1; j += 1) {
                cout << j << " ";
            }
            for (int k = (i * 2 - 1) * 2; k > 2; k -= 1) {
                cout << " ";
            }
            for (int l = n - i + 1; l > 0; l -= 1) {
                cout << l << " ";
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends