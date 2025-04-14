#include "BattleBoatsGrid.h"
#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

void runAddBoatTests(BattleBoatsGrid& grid) {
    vector<string> boatCoords = {"A1", "B2", "C3", "D4", "E5"};

    for (const auto& coord : boatCoords) {
        bool success = grid.addBoat(coord);
        assert(success && "Boat should be added successfully");
    }

    assert(!grid.addBoat("A1") && "Duplicate boat should not be added");
    assert(!grid.addBoat("Z9") && "Invalid row should be rejected");
    assert(!grid.addBoat("A0") && "Invalid column should be rejected");

    cout << "Boat placement tests passed!\n";
}

void runFireShotTests(BattleBoatsGrid& grid) {
    vector<string> hitShots = {"A1", "C3"};
    vector<string> missShots = {"J10", "H8"};

    for (const auto& shot : hitShots) {
        string result = grid.fireShot(shot);
        assert(result.find("Hit") != string::npos && "Should hit a boat");
    }

    for (const auto& shot : missShots) {
        string result = grid.fireShot(shot);
        assert(result.find("Miss") != string::npos && "Should miss");
    }
    string repeat = grid.fireShot("A1");
    assert(repeat.find("Already") != string::npos && "Should not fire twice on same cell");

    cout << "Firing tests passed!\n";
}

void runDisplayTests(BattleBoatsGrid& grid) {
    cout << "\nFull Board (showAll = true):\n";
    cout << grid.display(true);

    cout << "\nHidden Opponent View (showAll = false):\n";
    cout << grid.display(false);
}

int main() {
    BattleBoatsGrid testGrid;
    testGrid.reset();

    cout << "\n===== Running BattleBoatsGrid Tests =====\n";

    runAddBoatTests(testGrid);
    runFireShotTests(testGrid);
    runDisplayTests(testGrid);

    cout << "\nAll tests completed successfully!\n";

    return 0;
}

