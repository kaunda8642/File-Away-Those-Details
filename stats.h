#ifndef STATS_H
#define STATS_H

#include <string>

struct Stats {
    int count;
    double mean;
    double stddev;
    double min;
    double max;
};

bool calculateStats(const std::string& filename, Stats& stats);

#endif // STATS_H
#pragma once
