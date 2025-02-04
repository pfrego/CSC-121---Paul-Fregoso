#include <iostream>
using namespace std;
int main () {
    int d = 0.0;
    int sides = 0.0;
    cout << "Welcome to the Dice Rolling Program!\n" << "How many dice are in your roll? ";
    cin >> d;
    cout << "\nHow many sides are on a dice in your roll? ";
    cin >> sides;
    cout << "\nThank you! When rolling a " << d << "d" << sides << " your statistics will be: \n";
    int mini = d * 1;
    int max = d * sides;
    double avg = (mini + max)/2.0;
    
    cout << "Minimum: " << mini << "\n";
    cout << "Average: " << avg << "\n";
    cout << "Maximum: " << max << "\n";
    srand(time(0));
    int i = (1 + (rand() % max));
    
    cout << "You rolled a " << i << "! \n" << "Thank you for using this program! \n";
}
