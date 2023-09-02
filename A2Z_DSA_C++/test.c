#include <stdio.h>
#include <time.h>

int main() {
    // Record the start time
    clock_t start = clock();

    // Your code or function to be executed
    for (long long i = 0; i < 1000000000LL; ++i) {
        // Replace this with your actual code
    }

    // Record the end time
    clock_t end = clock();

    // Calculate the elapsed time in seconds
    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("%.2fs\n", elapsed_time); // 0.97s

    return 0;
}
