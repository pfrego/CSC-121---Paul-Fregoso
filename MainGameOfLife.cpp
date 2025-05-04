#include "GameOfLife.h"
#include <iostream>
#include <sstream>

std::set<int> parseRule(const std::string& input) {
    std::set<int> rule;
    std::stringstream ss(input);
    int num;
    while (ss >> num) {
        rule.insert(num);
    }
    return rule;
}

int main() {
    int rows = 10, cols = 10;
    std::string birthInput, survivalInput;

    std::cout << "Enter neighbor counts for birth (e.g., '3'): ";
    std::getline(std::cin, birthInput);
    std::cout << "Enter neighbor counts for survival (e.g., '2 3'): ";
    std::getline(std::cin, survivalInput);

    GameOfLife game(rows, cols, parseRule(birthInput), parseRule(survivalInput));

    game.setCell(1, 2, true);
    game.setCell(2, 3, true);
    game.setCell(3, 1, true);
    game.setCell(3, 2, true);
    game.setCell(3, 3, true);

    for (int i = 0; i < 10; ++i) {
        game.display();
        game.nextGeneration();
    }

    return 0;
}

