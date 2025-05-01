#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "stats.h"

void createTestFile(const std::string& filename, const std::string& content) {
    std::ofstream outfile(filename);
    outfile << content;
    outfile.close();
}

bool isClose(double a, double b, double epsilon = 1e-6) {
    return std::fabs(a - b) < epsilon;
}

void runTest(const std::string& testName, const std::string& content, int expectedCount,
             double expectedMean, double expectedStddev, double expectedMin, double expectedMax) {
    
    std::string filename = testName + ".txt";
    createTestFile(filename, content);

    Stats stats;
    if (!processFile(filename, stats)) {
        std::cout << "[FAIL] " << testName << " - Could not process file." << std::endl;
        return;
    }

    bool passed = true;
    if (stats.count != expectedCount) passed = false;
    if (!isClose(stats.mean, expectedMean)) passed = false;
    if (!isClose(stats.stddev, expectedStddev)) passed = false;
    if (!isClose(stats.min, expectedMin)) passed = false;
    if (!isClose(stats.max, expectedMax)) passed = false;

    if (passed) {
        std::cout << "[PASS] " << testName << std::endl;
    } else {
        std::cout << "[FAIL] " << testName << std::endl;
        std::cout << "  Got Count: " << stats.count << std::endl;
        std::cout << "  Got Mean: " << stats.mean << std::endl;
        std::cout << "  Got StdDev: " << stats.stddev << std::endl;
        std::cout << "  Got Min: " << stats.min << std::endl;
        std::cout << "  Got Max: " << stats.max << std::endl;
    }
}

void runEmptyFileTest() {
    std::string filename = "empty.txt";
    createTestFile(filename, "");
    Stats stats;
    if (!processFile(filename, stats)) {
        std::cout << "[PASS] empty_file - correctly handled empty file." << std::endl;
    } else {
        std::cout << "[FAIL] empty_file - expected failure but got success." << std::endl;
    }
}

int main() {
    runTest("test1", "1 2 3 4 5", 5, 3.0, std::sqrt(2.0), 1, 5);
    runTest("test2", "10 10 10", 3, 10.0, 0.0, 10, 10);
    runTest("test3", "2.5 3.5 4.5", 3, 3.5, std::sqrt(0.6666667), 2.5, 4.5);
    runTest("test4", "100", 1, 100.0, 0.0, 100, 100);
    runEmptyFileTest();

    return 0;
}

