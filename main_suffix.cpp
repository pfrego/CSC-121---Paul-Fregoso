#include <iostream>
#include "number_suffix.h"

int main() {
    
    std::cout << number_suffix(1) << std::endl;
    std::cout << number_suffix(2) << std::endl;
    std::cout << number_suffix(3) << std::endl;
    std::cout << number_suffix(4) << std::endl;
    std::cout << number_suffix(11) << std::endl;
    std::cout << number_suffix(21) << std::endl;
    std::cout << number_suffix(120) << std::endl;
    
    std::cout << number_suffix(1, true) << std::endl;
    std::cout << number_suffix(21, true) << std::endl;
    std::cout << number_suffix(100, true) << std::endl;

    return 0;
}

