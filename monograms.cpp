#include <iostream>
using namespace std;
int main(){
    char fn;
    char mn;
    char ln;
    cout << "Welcome to the Monogram Program! \n" << "Please enter your intials (first, middle and last): " ;
    cin >> fn >> mn >> ln;
    
    cout << "Your monogram will be " << char (toupper (mn))<< "."<< char (tolower (fn)) << "." << char (toupper(ln)) << "\n" << "Thank you for using this Program! \n" ;
}
