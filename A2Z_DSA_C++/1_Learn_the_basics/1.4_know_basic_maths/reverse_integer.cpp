class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        int temp = 0;
        while (x > 0 || x < 0) {
            temp = x % 10;
            rev = rev * 10 + temp;
            x /= 10;
        }
        if (rev < numeric_limits<int>::min() || rev > numeric_limits<int>::max()) {
        return 0;
        }
        return rev;
    }
};