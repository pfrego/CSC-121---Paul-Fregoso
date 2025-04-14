#include <iostream>

template <typename T>
T findLargest(T arr[], size_t size) {
    T largest = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
double calculateAverage(int arr[], size_t size) {
    if (size == 0) {
        return 0;
    }

    int sum = 0;
    for (size_t i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / size;
}

int findSmallest(int arr[], size_t size) {
    if (size == 0) {
        return -1;
    }
    
    int smallest = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

double findMedian(int arr[], size_t size) {
    if (size == 0) {
        return 0.0;
    }

    if (size % 2 != 0) {
        return arr[size / 2];
    }

    return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
}

int main() {
    int intArray[] = {3 ,1 ,5 ,9 ,2};
    

    std::cout << "Largest in intArray: " << findLargest(intArray, sizeof(intArray) / sizeof(intArray[0])) << std::endl;
    
    double average = calculateAverage(intArray, sizeof(intArray) / sizeof(intArray[0]));
        
    std::cout << "Average of intArray: " << average << std::endl;
    
    int smallest = findSmallest(intArray, sizeof(intArray) / sizeof(intArray[0]));
        if (smallest != -1) {
            std::cout << "Smallest number in intArray: " << smallest << std::endl;
        } else {
            std::cout << "Array is empty." << std::endl;
        }
    double median = findMedian(intArray, sizeof(intArray) / sizeof(intArray[0]));
      std::cout << "Median of the array: " << median << std::endl;

    
    return 0;
}

