class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long int rev = 0;
        int temp = 0;

        if (x < 0) {
            return 0;
        }
        else {
            while (x > 0) {
                temp = x % 10;
                rev = rev * 10 + temp;
                x /= 10;
            }
            return original == rev;

        }
    }
};