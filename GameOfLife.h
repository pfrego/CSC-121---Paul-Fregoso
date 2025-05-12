#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

#include <vector>

class GameOfLife {
public:
    GameOfLife(int rows, int cols, int birthLimit, int survivalLower, int survivalUpper);
    void initializeRandom();
    void display() const;
    void update();

private:
    int rows, cols;
    int birthLimit, survivalLower, survivalUpper;
    std::vector<std::vector<int>> grid, nextGrid;

    int countAliveNeighbors(int row, int col) const;
};

#endif 

