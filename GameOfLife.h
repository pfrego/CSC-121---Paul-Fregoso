#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

#include <vector>
#include <set>

class GameOfLife {
public:
    GameOfLife(int rows, int cols, std::set<int> birthRules, std::set<int> survivalRules);
    void setCell(int row, int col, bool alive);
    void nextGeneration();
    void display() const;
    bool getCell(int row, int col) const;

private:
    int rows, cols;
    std::vector<std::vector<bool>> grid;
    std::set<int> birthRules;
    std::set<int> survivalRules;

    int countAliveNeighbors(int row, int col) const;
};

#endif

