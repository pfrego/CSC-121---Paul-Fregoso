#include <iostream>
#include <string>
#include "cat_processor.h"

using namespace std;

int main() {
    cout << "Welcome to the Cat Word Processor! Please enter a sentence: ";

    string input;
    getline(cin, input);

    cout << "\nYour sentence is:\n\n" << input << "\n\n";

    string processed = processSentence(input);

    cout << "Your catified sentence is:\n\n" << processed << "\n\n";
    cout << "Have a cat-tastic day!\n";

    return 0;
}

