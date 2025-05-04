#include "GameOfLife.h"
#include <cassert>
#include <iostream>

void testStillLifeBlock() {
    GameOfLife game(4, 4, {3}, {2, 3});
    game.setCell(1, 1, true);
    game.setCell(1, 2, true);
    game.setCell(2, 1, true);
    game.setCell(2, 2, true);

    auto before = game.getCell(1, 1);
    game.nextGeneration();
    assert(game.getCell(1, 1) == before);
    assert(game.getCell(2, 2) == before);
    std::cout << "Still life block test passed.\n";
}

void testOscillatorBlinker() {
    GameOfLife game(5, 5, {3}, {2, 3});
    game.setCell(2, 1, true);
    game.setCell(2, 2, true);
    game.setCell(2, 3, true);

    game.nextGeneration();
    assert(game.getCell(1, 2));
    assert(game.getCell(2, 2));
    assert(game.getCell(3, 2));

    std::cout << "Blinker oscillator test passed.\n";
}

int main() {
    testStillLifeBlock();
    testOscillatorBlinker();
    return 0;
}

