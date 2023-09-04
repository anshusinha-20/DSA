#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */

        int a = 1;
        int b = 1;
        int temp;
        int n;
        cin >> n;
        int arr[n];
        arr[0] = a;
        arr[1] = b;

        if (n == 1 || n == 2) {
                cout << 1 << endl;
        }
        else {
                for (int i = 2; i < n; i += 1) {
                        temp = a + b;
                        a = b;
                        b = temp;
                        arr[i] = temp;
                }
                cout << arr[n -1] << endl;
        }

}