//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int count = 1;
        for (int i = n; i > 0; i -= 1) {
            for (int j = i-1; j > 0; j -= 1) {
                cout << " ";
            }
            for(int k = 1; k <= (2 * count) - 1 ; k += 1) {
                cout << "*";
            }
            cout << endl;
            count += 1;
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