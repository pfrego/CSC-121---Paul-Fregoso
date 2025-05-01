#include "stats.h"
#include <fstream>
#include <iostream>
#include <limits>
#include <cmath>

bool processFile(const std::string& filename, Stats& stats) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }

    double number;
    double sum = 0.0;
    double sumSquares = 0.0;
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

    if (count == 0) {
        return false; 
    }

    double mean = sum / count;
    double variance = (sumSquares / count) - (mean * mean);
    double stddev = std::sqrt(variance);

    stats.count = count;
    stats.mean = mean;
    stats.stddev = stddev;
    stats.min = min;
    stats.max = max;

    return true;
}

