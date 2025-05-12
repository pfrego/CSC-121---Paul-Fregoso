#include "GameOfLife.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

GameOfLife::GameOfLife(int rows, int cols, int birthLimit, int survivalLower, int survivalUpper)
    : rows(rows), cols(cols), birthLimit(birthLimit),
      survivalLower(survivalLower), survivalUpper(survivalUpper) {
    grid.resize(rows, vector<int>(cols, 0));
    nextGrid.resize(rows, vector<int>(cols, 0));
}

void GameOfLife::initializeRandom() {
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            grid[i][j] = rand() % 2;
}

void GameOfLife::display() const {
    system("clear"); // "cls" on Windows
    for (const auto& row : grid) {
        for (int cell : row)
            cout << (cell ? 'O' : '.') << ' ';
        cout << '\n';
    }
    cout << '\n';
}

void GameOfLife::update() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int neighbors = countAliveNeighbors(i, j);
            if (grid[i][j]) {
                nextGrid[i][j] = (neighbors >= survivalLower && neighbors <= survivalUpper) ? 1 : 0;
            } else {
                nextGrid[i][j] = (neighbors == birthLimit) ? 1 : 0;
            }
        }
    }
    swap(grid, nextGrid);
}

int GameOfLife::countAliveNeighbors(int row, int col) const {
    int count = 0;
    for (int i = -1; i <= 1; ++i)
        for (int j = -1; j <= 1; ++j) {
            if (i == 0 && j == 0) continue;
            int r = row + i, c = col + j;
            if (r >= 0 && r < rows && c >= 0 && c < cols)
                count += grid[r][c];
        }
    return count;
}

