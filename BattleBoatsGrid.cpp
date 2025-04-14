#include "BattleBoatsGrid.h"
#include <sstream>
#include <cctype>

BattleBoatsGrid::BattleBoatsGrid() {
    reset();
}

void BattleBoatsGrid::reset() {
    for (auto& row : grid)
        for (auto& cell : row)
            cell = "_";
    boatsRemaining = 0;
}

int BattleBoatsGrid::getRowIndex(char rowChar) {
    rowChar = std::toupper(rowChar);
    return (rowChar >= 'A' && rowChar <= 'J') ? rowChar - 'A' : -1;
}

int BattleBoatsGrid::getColumnIndex(const std::string& colStr) {
    try {
        int col = std::stoi(colStr);
        return (col >= 1 && col <= 10) ? col - 1 : -1;
    } catch (...) {
        return -1;
    }
}

std::string BattleBoatsGrid::generateHeader() {
    std::stringstream ss;
    ss << "\t";
    for (int i = 1; i <= 10; ++i)
        ss << i << (i < 10 ? " " : "");
    ss << "\n";
    return ss.str();
}

std::string BattleBoatsGrid::generateRow(char letter, int index, bool showAll) {
    std::stringstream ss;
    ss << letter << "\t";
    for (int i = 0; i < 10; ++i) {
        std::string cell = grid[index][i];

        if (!showAll && cell == "🛥️") {
            ss << "_ ";
        } else {
            ss << cell << " ";
        }
    }
    ss << "\n";
    return ss.str();
}

bool BattleBoatsGrid::addBoat(const std::string& coordinate) {
    if (coordinate.length() < 2 || coordinate.length() > 3) return false;
    int row = getRowIndex(coordinate[0]);
    std::string colStr = coordinate.substr(1);
    int col = getColumnIndex(colStr);
    if (row == -1 || col == -1 || grid[row][col] == "🛥️") return false;

    grid[row][col] = "🛥️";
    boatsRemaining++;
    return true;
}

std::string BattleBoatsGrid::fireShot(const std::string& coordinate) {
    if (coordinate.length() < 2 || coordinate.length() > 3) return "Invalid coordinate!";
    int row = getRowIndex(coordinate[0]);
    std::string colStr = coordinate.substr(1);
    int col = getColumnIndex(colStr);
    if (row == -1 || col == -1) return "Invalid coordinate!";

    if (grid[row][col] == "🛥️") {
        grid[row][col] = "X";
        boatsRemaining--;
        return "💥 Hit!";
    } else if (grid[row][col] == "_") {
        grid[row][col] = "O";
        return "Miss!";
    } else {
        return "Already targeted!";
    }
}

bool BattleBoatsGrid::isGameOver() {
    return boatsRemaining == 0;
}

std::string BattleBoatsGrid::display(bool showAll) {
    std::stringstream ss;
    ss << generateHeader();
    for (int i = 0; i < 10; ++i)
        ss << generateRow('A' + i, i, showAll);
    return ss.str();
}

bool BattleBoatsGrid::isValidTarget(int row, int col) {
    return grid[row][col] == "_" || grid[row][col] == "🛥️";
}

