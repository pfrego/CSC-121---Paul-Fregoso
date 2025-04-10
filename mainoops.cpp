#include <iostream>
#include <vector>
#include "remove_duplicates.h"

using namespace std;

int main() {
    
    vector<int> my_vector = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

    
    vector<int> filtered_vector = remove_duplicates(my_vector);

   
    cout << "Filtered vector: ";
    for (int num : filtered_vector) {
        cout << num << " ";
    }
    cout << endl;

    
    cout << "Original vector: ";
    for (int num : my_vector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

