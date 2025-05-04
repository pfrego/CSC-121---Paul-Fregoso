#include "GameOfLife.h"
#include <iostream>

GameOfLife::GameOfLife(int rows, int cols, std::set<int> birthRules, std::set<int> survivalRules)
    : rows(rows), cols(cols), birthRules(birthRules), survivalRules(survivalRules) {
    grid.resize(rows, std::vector<bool>(cols, false));
}

void GameOfLife::setCell(int row, int col, bool alive) {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        grid[row][col] = alive;
    }
}

bool GameOfLife::getCell(int row, int col) const {
    if (row >= 0 && row < rows && col >= 0 && col < cols)
        return grid[row][col];
    return false;
}

int GameOfLife::countAliveNeighbors(int row, int col) const {
    int count = 0;
    for (int dr = -1; dr <= 1; ++dr) {
        for (int dc = -1; dc <= 1; ++dc) {
            if (dr == 0 && dc == 0) continue;
            int r = row + dr, c = col + dc;
            if (r >= 0 && r < rows && c >= 0 && c < cols && grid[r][c])
                ++count;
        }
    }
    return count;
}

void GameOfLife::nextGeneration() {
    std::vector<std::vector<bool>> newGrid = grid;

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            int neighbors = countAliveNeighbors(r, c);
            if (grid[r][c]) {
                newGrid[r][c] = survivalRules.count(neighbors);
            } else {
                newGrid[r][c] = birthRules.count(neighbors);
            }
        }
    }
    grid = newGrid;
}

void GameOfLife::display() const {
    for (const auto& row : grid) {
        for (bool cell : row) {
            std::cout << (cell ? 'O' : '.');
        }
        std::cout << '\n';
    }
    std::cout << "----------------\n";
}

