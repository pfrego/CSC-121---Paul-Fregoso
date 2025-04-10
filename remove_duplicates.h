#ifndef REMOVE_DUPLICATES_H
#define REMOVE_DUPLICATES_H

#include <vector>
#include <unordered_set>

using namespace std;


template <typename T>
vector<T> remove_duplicates(const vector<T>& input_vector) {
    unordered_set<T> seen;
    vector<T> result;

   
    for (const T& item : input_vector) {
        if (seen.find(item) == seen.end()) {
            result.push_back(item);
            seen.insert(item);
        }
    }

    return result;  
}

#endif

