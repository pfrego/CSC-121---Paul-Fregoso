#include "BattleBoatsGrid.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;


string getCoordinateInput(const string& prompt) {
    string input;
    cout << prompt;
    cin >> input;
    return input;
}

string getRandomCoordinate() {
    char row = 'A' + rand() % 10;
    int col = 1 + rand() % 10;
    return string(1, row) + to_string(col);
}

pair<int, int> parseCoordinate(const string& coordinate) {
    char rowChar = coordinate[0];
    string colStr = coordinate.substr(1);
    int row = toupper(rowChar) - 'A';
    int col = stoi(colStr) - 1;
    return { row, col };
}

int main() {
    srand(time(0));

    BattleBoatsGrid player, cpu;
    string input;
    int numBoats = 5;

    do {
        player.reset();
        cpu.reset();
        vector<string> cpuBoatLocations;

        cout << "\n=== BATTLEBOATS: PLAYER VS CPU ===\n";
        cout << "Place your " << numBoats << " boats (e.g. A1, J10):\n";

        
        for (int i = 0; i < numBoats;) {
            input = getCoordinateInput("Boat " + to_string(i + 1) + ": ");
            if (player.addBoat(input)) i++;
            else cout << "Invalid or duplicate coordinate. Try again.\n";
        }

        
        while (cpuBoatLocations.size() < numBoats) {
            string coord = getRandomCoordinate();
            if (cpu.addBoat(coord)) cpuBoatLocations.push_back(coord);
        }

       
        while (true) {
            cout << "\n--- Your Turn ---\n";
            cout << "Your Board:\n" << player.display(true);
            cout << "CPU Board (discovered):\n" << cpu.display(false);

            input = getCoordinateInput("Fire at: ");
            cout << "You: " << cpu.fireShot(input) << "\n";

            if (cpu.isGameOver()) {
                cout << "\n🏆 You win! All enemy ships sunk!\n";
                break;
            }

            
            cout << "\n--- CPU's Turn ---\n";
            string cpuShot;
            int row, col;

           
            while (true) {
                cpuShot = getRandomCoordinate();
                tie(row, col) = parseCoordinate(cpuShot);
                if (player.isValidTarget(row, col)) break;
            }

            cout << "CPU fires at " << cpuShot << "...\n";
            cout << "CPU: " << player.fireShot(cpuShot) << "\n";

            if (player.isGameOver()) {
                cout << "\n💀 CPU wins! All your ships are sunk!\n";
                break;
            }
        }

        cout << "Play again? (y/n): ";
        cin >> input;

    } while (tolower(input[0]) == 'y');

    cout << "\nThanks for playing BattleBoats!\n";
    return 0;
}

