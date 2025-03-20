# include <iostream>
# include <string>
# include "Palindrome.hpp"
using namespace std;

bool is_Palindrome(string word) {
    int left = 0;
    int right = word.length() - 1;
    
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
    }
    
    while (left < right){
        if (word[left] != word[right]){
            return false;
        }
        left ++;
        right--;
    }
    return true;
}
