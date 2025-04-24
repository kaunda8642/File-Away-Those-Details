#include "stats.h"
#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to the Number Statistics Program!\n\n";

    std::string filename;
    Stats stats;

    while (true) {
        std::cout << "Please enter the name of your data file: ";
        std::getline(std::cin, filename);

        std::cout << "\nReading data from '" << filename << "'...\n";
        std::cout << "\nCalculating...\n";

        if (calculateStats(filename, stats)) {
            std::cout << "\nDone processing data!\n\n";
            std::cout << "For your data, the statistics are as follows:\n\n";
            std::cout << "     Count:  " << stats.count << "\n";
            std::cout << "   Minimum:  " << stats.min << "\n";
            std::cout << "      Mean:  " << stats.mean << "\n";
            std::cout << "   Maximum:  " << stats.max << "\n";
            std::cout << "    StdDev:  " << stats.stddev << "\n\n";
            break;
        }
        else {
            std::cerr << "\nI'm sorry, I could not open '" << filename << "' or it contains no valid data.\n";
        }
    }

    std::cout << "Thank you for using the Number Statistics Program!\n";
    return 0;
}