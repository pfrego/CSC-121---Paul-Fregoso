#include <iostream>
#include <cassert>
#include "cat_processor.h"

using namespace std;

void runTests() {
    
    string input1 = "My cat is angry and likes yarn.";
    string expected1 = "My /ᐠ｡ꞈ｡ᐟ\\ is (=ಠᆽಠ=) and likes o~.";
    assert(processSentence(input1) == expected1);

   
    string input2 = "The kitten wants to dance.";
    string expected2 = "The (•ㅅ•) wants to ~( ˘▾˘ ~).";
    assert(processSentence(input2) == expected2);

    
    string input3 = "No cats here.";
    string expected3 = "No cats here.";
    assert(processSentence(input3) == expected3);

    cout << "All tests passed!\n";
}

int main() {
    runTests();
    return 0;
}

