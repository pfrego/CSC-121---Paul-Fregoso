#include <cassert>
#include "Palindrome.hpp"
using namespace std;
int main() {
    cout << "Testing..." << endl;
    assert(is_Palindrome("Rotavator"));
    assert(is_Palindrome("x"));
    assert(is_Palindrome("mom"));
    assert(is_Palindrome("lol"));
 
    assert(!is_Palindrome("Sam"));
    assert(!is_Palindrome("orange"));
    assert(!is_Palindrome("flower"));
    assert(!is_Palindrome("yes"));
    cout << "Test succeeded" << endl;
}
