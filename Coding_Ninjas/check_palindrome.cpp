// RECURSIVE APPROACH
void string_reverse(int l, int r, string &rev) {
    int temp;
    if (l >= r) { // if left index is more than or equal to right index than terminate
        return;
    }
    temp = rev[l];
    rev[l] = rev[r];
    rev[r] = temp;
    string_reverse(l + 1, r - 1, rev);
}

bool isPalindrome(string& str) {
    // Write your code here.
    int n = str.length();
    string rev = str;

    if (n <= 1) {
        return true;
    }
    string_reverse(0, n-1, rev); // passing left most index, right most index and string rev containing copy of str
    
    if (str == rev) {
        return true;
    }
    return false;
}

// ITERATIVE APPROACH
bool isPalindrome(string& str) {
    // Write your code here.
    int n = str.length();
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        if (str[l] != str[r]) {
            return false;
        }
        l += 1;
        r -= 1;
    }
    return true;
}