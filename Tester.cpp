#include "stats.h"
#include <iostream>

void runTest(const std::string& filename) {
    Stats stats;
    if (calculateStats(filename, stats)) {
        std::cout << "Test Passed: " << filename << "\n";
        std::cout << "Count: " << stats.count << "\n";
        std::cout << "Min: " << stats.min << "\n";
        std::cout << "Mean: " << stats.mean << "\n";
        std::cout << "Max: " << stats.max << "\n";
        std::cout << "StdDev: " << stats.stddev << "\n\n";
    }
    else {
        std::cout << "Test Failed or Empty File: " << filename << "\n\n";
    }
}

int main() {
    runTest("test1.txt");
    runTest("empty.txt");
    runTest("invalid.txt");

    return 0;
}
