#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

int main() {
    std::string filePath;
    std::cout << "Enter the path to the file: ";
    std::cin >> filePath;

    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return 1;
    }

    std::string line;
    double totalEruption = 0.0;
    double totalWaiting = 0.0;
    int count = 0;

   
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string eruptionStr, waitingStr;

        if (std::getline(ss, eruptionStr, ',') && std::getline(ss, waitingStr)) {
            try {
                double eruption = std::stod(eruptionStr);
                int waiting = std::stoi(waitingStr);

                totalEruption += eruption;
                totalWaiting += waiting;
                ++count;
            } catch (...) {
                
                continue;
            }
        }
    }

    file.close();

    if (count == 0) {
        std::cout << "No valid data found in the file." << std::endl;
        return 1;
    }

    double averageEruption = totalEruption / count;
    double averageWaiting = totalWaiting / count;

    std::cout << std::fixed << std::setprecision(3); 
    std::cout << "\nThe average eruption length is " << averageEruption << " minutes." << std::endl;
    std::cout << "The average eruption wait time is " << averageWaiting << " minutes." << std::endl;

    return 0;
}

