# include <iostream>
using namespace std;
int main(){
    bool input;
    bool yes = true;
    cout << "Welcome to the Rock Paper Scissors Program! \n" << "Would you like to play? (1.yes or 2.no) ";
    cin >> input;
    while (input == 1 || yes){
        string computer;
        srand (time(0));
        int i = (1 + (rand ()% 3));
        if (i == 1){
            computer = "Rock";
        }else if (i == 2){
            computer = "Paper";
        }else if (i == 3){
            computer = "Scissors";
        }
        cout<< "Pick a move: \n" << "1. Rock \n" << "2. Paper \n" << "3. Scissors \n";
        string user;
        cin >> user;
        if (user == computer){
            cout << "You choose " << user << " computer choose " << computer << ". It's a tie! \n";
        } bool rock = true;
        if (user == 1 || rock > i == 3 ){
            cout << "You choose " << user << " computer choose " << computer << ".You win! \n";
        }
        cout << i << "\n"<< "Play Again? \n";
        cin >> input;}
    
    cout << "Thank you for playing! Goodbye!";
        
    
    
}
