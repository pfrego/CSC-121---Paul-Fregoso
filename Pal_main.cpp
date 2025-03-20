# include <iostream>
# include <string>
# include "Palindrome.hpp"
using namespace std;

int main() {
    string word;
    cout << "Welcome to the Palindrome test!\n" << "Please enter a word: ";
    cin >> word;
    if (is_Palindrome(word)){
        cout << word << " is a palindrome." << endl;
    }else{
            cout << word << " is not a palindrome." << endl;
        }
    cout << "Thank you for using the program!" << endl;
}
