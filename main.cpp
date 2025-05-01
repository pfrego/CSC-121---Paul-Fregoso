#include <iostream>
#include <string>
#include "stats.h"

int main() {
    std::cout << "Welcome to the Number Statistics Program!" << std::endl << std::endl;

    std::string filename;
    std::cout << "Please enter the name of your data file: ";
    std::getline(std::cin, filename);
    Stats stats;

    if (!processFile(filename, stats)) {
        std::cerr << "Warning: Could not open file '" << filename << "' or it contains no valid data." << std::endl;
        return 1;
    }

    std::cout << "\nFile '" << filename << "' opened successfully!" << std::endl;
    std::cout << "Reading data..." << std::endl;
    std::cout << "Calculating..." << std::endl;

    std::cout << "\nFor your data, the statistics are as follows:\n" << std::endl;
    std::cout << "     Count:  " << stats.count << std::endl;
    std::cout << "   Minimum:  " << stats.min << std::endl;
    std::cout << "      Mean:  " << stats.mean << std::endl;
    std::cout << "   Maximum:  " << stats.max << std::endl;
    std::cout << "    StdDev:  " << stats.stddev << std::endl;

    std::cout << "\nThank you for using the Number Statistics Program!" << std::endl;

    return 0;
}
