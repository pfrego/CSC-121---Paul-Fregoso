#include "cat_processor.h"


void replaceFirstOccurrence(string& sentence, const string& word, const string& emoticon) {
    size_t pos = sentence.find(word);
    if (pos != string::npos) {
        sentence.replace(pos, word.length(), emoticon);
    }
}


string processSentence(const string& input) {
    string processed = input;

    replaceFirstOccurrence(processed, "cat", "/ᐠ｡ꞈ｡ᐟ\\");
    replaceFirstOccurrence(processed, "kitty", "(•ㅅ•)");
    replaceFirstOccurrence(processed, "kitten", "(•ㅅ•)");
    replaceFirstOccurrence(processed, "yarn", "o~");
    replaceFirstOccurrence(processed, "angry", "(=ಠᆽಠ=)");
    replaceFirstOccurrence(processed, "dance", "~( ˘▾˘ ~)");

    return processed;
}

