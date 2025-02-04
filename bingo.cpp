#include <iostream>
using namespace std;
int main(){
    int num = 0;
    cout<< "Welcome to the Bingo Generator! \n" << " Would you like to generate a number? \n" << "1. Yes \n" << "2. No \n";
    cin>>num;
    while(num == 1){
        srand(time (0));
        int i = (1 + (rand()% 75));
        if ( i <= 15){
            cout << "B";
        } else if ( i <=30){
            cout<< "I";
        } else if ( i <= 45){
            cout<< "N";
        } else if ( i <= 60){
            cout<< "G";
        } else {
            cout<<"O";
        }
        cout << i << "\n";
        cout<< "Would like to continue? \n";
        cin >> num; }
    cout << "Thank you for playing, goodbye! \n";
}
