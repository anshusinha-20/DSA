// RECURSIVE APPROACH
void sum_n(long long i, long long &result) {
    if (i < 0) {
        return;
    }
    result += i;
    sum_n(i - 1, result);
}

long long sumFirstN(long long n) {
    // Write your code here.
    long long total = 0;
    sum_n(n, total);
    return total;
}

// ITERATIVE APPROACH
long long sumFirstN(long long n) {
    // Write your code here.
    int sum = 0;

    while (n > 0) {
        sum += n;
        n -= 1;
    }
    return sum;
}

// MATHEMATICAL OBSERVATIONS
long long sumFirstN(long long n) {
    // Write your code here.
    return (n * (n + 1) / 2);
}
