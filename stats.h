#ifndef STATS_H
#define STATS_H

#include <string>

struct Stats {
    int count = 0;
    double mean = 0.0;
    double stddev = 0.0;
    double min = 0.0;
    double max = 0.0;
};

bool processFile(const std::string& filename, Stats& stats);

#endif

