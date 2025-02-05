#include<iostream>
using namespace std;
int main () {
    int a = 0.0;
    int size = 0.0;
    cout<< "Hello! Welcome to the Shapes Program!" << "Would you like to draw a triangle (1) or a square (2)? \n";
    cin >> a;
    
    cout << "Good choice! How big would you like the size length to be? ";
    cin >> size;
    
    if (a == 1){
        cout << "Here is your triangle: \n";
        for(int i = size; i > 0; i--){
            for(int j = i; j > 0; j--){
                cout <<"*";
            }
            cout << endl;
        }
    } else if ( a == 2 ) {
        cout << "Here is your square: \n";
        for( int i = 0; i < size; i++){
            for( int j = 0; j < size; j++){
                cout << "*";
            }
            cout << endl;
            }
      
    }
    cout << "Thank you for using this program! Goodbye! \n";
}
