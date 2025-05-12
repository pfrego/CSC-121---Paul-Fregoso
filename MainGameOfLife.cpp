#include "GameOfLife.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int getPositiveInt(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (!cin.fail() && value > 0) return value;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a positive integer.\n";
    }
}

int main() {
    
    cout << "Welcome to Conway's Game of Life!\n" << "This is a simulation where cells evolve according to specific rules.\n" << "You will be able to define the grid size and the birth/survival rules.\n" << "Let's begin! Please provide the required inputs.\n\n";

    
    int rows = getPositiveInt("Enter number of rows: ");
    int cols = getPositiveInt("Enter number of columns: ");
    int birthLimit = getPositiveInt("Enter birth limit (e.g., 3): ");
    int survivalLower = getPositiveInt("Enter survival lower limit (e.g., 2): ");
    int survivalUpper = getPositiveInt("Enter survival upper limit (e.g., 3): ");

    
    GameOfLife game(rows, cols, birthLimit, survivalLower, survivalUpper);
    game.initializeRandom();

    
    while (true) {
        game.display();
        game.update();

        string input;
        while (true) {
            cout << "Do you want to continue to the next generation? (y/n): ";
            getline(cin >> ws, input);
            if (input == "y" || input == "Y") break;
            else if (input == "n" || input == "N") {
                
                cout << "Thank you for playing Conway's Game of Life!\n" << "Please feel free to run the simulation again!\n";
                return 0;
            }
            else cout << "Please enter 'y' for yes or 'n' for no.\n";
        }
    }

    return 0;
}

