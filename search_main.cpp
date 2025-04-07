#include <iostream>
using namespace std;
int linearSearch(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int siz, int targ) {
    int left = 0;
    int right = siz - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        
        if (arr[mid] == targ) {
            return mid;
        }
        
       
        if (arr[mid] < targ) {
            left = mid + 1;
        }
       
        else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int array[] = {3, 7, 12, 5, 9, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 5;
    
    int result = linearSearch(array, size, target);
    
    if (result != -1) {
        cout << "Element " << target <<" found at index " << result << "\n";
    } else {
        cout << "Element " << target << " not found in the array\n";
    }
    int arr[] = {2, 3, 5, 7, 9, 12};
    int siz = sizeof(arr) / sizeof(arr[0]);
    int targ = 5;
    
    int res = binarySearch(arr, siz, targ);
    
    if (res != -1) {
        cout << "Element " << targ << " found at index "<< res << "\n";
    } else {
        cout << "Element " << targ << " not found in the array\n";
    }
    return 0;
}
