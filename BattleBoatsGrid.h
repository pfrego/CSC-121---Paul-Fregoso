#ifndef BATTLEBOATSGRID_H
#define BATTLEBOATSGRID_H

#include <string>
#include <array>

class BattleBoatsGrid {
private:
    std::array<std::array<std::string, 10>, 10> grid;
    int boatsRemaining;

    int getRowIndex(char rowChar);
    int getColumnIndex(const std::string& colStr);
    std::string generateHeader();
    std::string generateRow(char letter, int index, bool showAll);

public:
    BattleBoatsGrid();
    void reset();
    bool addBoat(const std::string& coordinate);
    std::string fireShot(const std::string& coordinate);
    bool isGameOver();
    std::string display(bool showAll = true);
    bool isValidTarget(int row, int col);
};

#endif

