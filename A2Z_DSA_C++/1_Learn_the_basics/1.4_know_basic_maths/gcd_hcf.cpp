// BRUTE FORCE: APPROACH 1
#include<cmath>
int calcGCD(int n, int m){
    // Write your code here.
    for (int i = min(n, m); i > 0 ; i -= 1) {
        if (n % i == 0 && m % i == 0) {
            return i;
        }
    }
}

// BEST APPROACH - EUCLIDEAN ALGORIHTM
int calcGCD(int n, int m){
    // Write your code here.
    while (n > 0 && m > 0) {
        if (n > m) {
            n = n % m;
        }
        else {
            m = m % n;
        }
    }
    if (n == 0) {
        return m;
    }
    else {
        return n;
    }
}
