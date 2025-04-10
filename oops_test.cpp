#include <iostream>
#include <vector>
#include "remove_duplicates.h"

using namespace std;

template <typename T, size_t N>
vector<T> remove_duplicates_from_array(T (&arr)[N]) {
    vector<T> vec(arr, arr + N);
    return remove_duplicates(vec);
}

void test_case_1() {
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    vector<int> filtered_vector = remove_duplicates_from_array(arr);

    cout << "Test case 1 - Expected: 1 2 3 4 5" << endl;
    cout << "Filtered vector: ";
    for (int num : filtered_vector) {
        cout << num << " ";
    }
    cout << endl;
}

void test_case_2() {
    int arr[] = {10, 20, 30, 30, 40};
    vector<int> filtered_vector = remove_duplicates_from_array(arr);

    cout << "Test case 2 - Expected: 10 20 30 40" << endl;
    cout << "Filtered vector: ";
    for (int num : filtered_vector) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    
    test_case_1();
    test_case_2();

    return 0;
}

