#include "stats.h"
#include <fstream>
#include <iostream>
#include <limits>
#include <cmath>

bool calculateStats(const std::string& filename, Stats& stats) {
    std::ifstream file(filename);
    if (!file.is_open()) return false;

    double number;
    double sum = 0;
    double sumSquares = 0;
    int count = 0;
    double min = std::numeric_limits<double>::max();
    double max = std::numeric_limits<double>::lowest();

    while (file >> number) {
        count++;
        sum += number;
        sumSquares += number * number;
        if (number < min) min = number;
        if (number > max) max = number;
    }

    if (count == 0) return false;

    stats.count = count;
    stats.mean = sum / count;
    stats.min = min;
    stats.max = max;
    stats.stddev = std::sqrt((sumSquares - count * stats.mean * stats.mean) / (count - 1));

    return true;
}