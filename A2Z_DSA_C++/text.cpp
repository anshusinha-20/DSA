#include <iostream>
#include <chrono>

int main() {
    // Record the start time
    auto start = std::chrono::high_resolution_clock::now();

    // Your code or function to be executed
    for (long long i = 0; i < 1000000000LL; ++i) {
        // Replace this with your actual code
    }

    // Record the end time
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the elapsed time in seconds
    std::chrono::duration<double> elapsed_time = end - start;

    std::cout << elapsed_time.count() << "s" << std::endl; // 0.970401s

    return 0;
}

