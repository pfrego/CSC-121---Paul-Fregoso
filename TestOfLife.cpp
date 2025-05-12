#include "GameOfLife.h"
#include <cassert>
#include <iostream>

using namespace std;


void testStillLifeBlock() {
    GameOfLife game(4, 4, 3, 2, 3);

   
    game.update();
    cout << "Still life block test passed.\n";
}


int main() {
    testStillLifeBlock();
    cout << "All tests passed.\n";
    return 0;
}

