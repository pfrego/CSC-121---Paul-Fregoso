#include <iostream>
#include <cassert>
#include <sstream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;


const int BOARD_SIZE = 4;


void initializeBoard(array<array<char, BOARD_SIZE>, BOARD_SIZE>& board) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            board[i][j] = '~';
        }
    }
}

void displayBoard(const array<array<char, BOARD_SIZE>, BOARD_SIZE>& board) {
    cout << "  1 2 3 4\n";
    char rowLabel = 'A';
    for (int i = 0; i < BOARD_SIZE; ++i) {
        cout << rowLabel++ << " ";
        for (int j = 0; j < BOARD_SIZE; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}


void placeShip(array<array<char, BOARD_SIZE>, BOARD_SIZE>& board, int& shipRow, int& shipCol) {
    shipRow = rand() % BOARD_SIZE;
    shipCol = rand() % BOARD_SIZE;
    board[shipRow][shipCol] = 'S';
}


void playerGuess(int& row, int& col) {
    string input;
    while (true) {
        cout << "Enter your guess (row [A-D] column [1-4]): ";
        getline(cin, input);
        
        
        stringstream ss(input);
        char rowChar;
        int colNum;

        ss >> rowChar >> colNum;
        
        
        rowChar = toupper(rowChar);
        row = rowChar - 'A';
        
        
        col = colNum - 1;

        if (ss.fail() || row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {
            cout << "Invalid input. Please enter row [A-D] and column [1-4]." << endl;
        } else {
            break;
        }
    }
}


bool checkHit(array<array<char, BOARD_SIZE>, BOARD_SIZE>& board, int row, int col) {
    if (board[row][col] == 'S') {
        board[row][col] = 'X';
        return true;
    } else if (board[row][col] == '~') {
        board[row][col] = 'O';
        return false;
    }
    return false;
}


void computerGuess(int& row, int& col) {
    row = rand() % BOARD_SIZE;
    col = rand() % BOARD_SIZE;
    cout << "Computer guesses: " << char(row + 'A') << " " << col + 1 << endl;
}


bool checkComputerHit(array<array<char, BOARD_SIZE>, BOARD_SIZE>& board, int row, int col) {
    if (board[row][col] == 'S') {
        board[row][col] = 'X';
        return true;
    } else if (board[row][col] == '~') {
        board[row][col] = 'O';
        return false;
    }
    return false;
}


void battleshipGame() {
    
    srand(time(0));

   
    array<array<char, BOARD_SIZE>, BOARD_SIZE> playerBoard;
    array<array<char, BOARD_SIZE>, BOARD_SIZE> computerBoard;

    initializeBoard(playerBoard);
    initializeBoard(computerBoard);

    
    int playerShipRow, playerShipCol;
    placeShip(playerBoard, playerShipRow, playerShipCol);

    int computerShipRow, computerShipCol;
    placeShip(computerBoard, computerShipRow, computerShipCol);

    cout << "Welcome to Battleship!" << endl;

   
    int turn = 1;
    while (true) {
        cout << "\nTurn " << turn++ << endl;

        
        cout << "Your board:" << endl;
        displayBoard(playerBoard);

        
        int playerRow, playerCol;
        playerGuess(playerRow, playerCol);
        if (checkHit(computerBoard, playerRow, playerCol)) {
            cout << "You hit the computer's ship!" << endl;
            break;
        }

        
        int compRow, compCol;
        computerGuess(compRow, compCol);
        if (checkComputerHit(playerBoard, compRow, compCol)) {
            cout << "The computer hit your ship!" << endl;
            break;
        }

        cout << "\n" << "------------------------" << endl;
    }

   
    cout << "\nGame Over!" << endl;
    cout << "Your final board:" << endl;
    displayBoard(playerBoard);
    cout << "Computer's final board:" << endl;
    displayBoard(computerBoard);
}

int main() {
    battleshipGame();
    return 0;
}

