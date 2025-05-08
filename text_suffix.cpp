#include <iostream>
#include <cassert>
#include "number_suffix.h"
void run_tests() {
    
    assert(number_suffix(0) == "");
    assert(number_suffix(1) == "st");
    assert(number_suffix(2) == "nd");
    assert(number_suffix(3) == "rd");
    assert(number_suffix(4) == "th");
    assert(number_suffix(10) == "th");
    assert(number_suffix(11) == "th");
    assert(number_suffix(21) == "st");
    assert(number_suffix(100) == "th");
    assert(number_suffix(120) == "th");
    
   
    assert(number_suffix(1, true) == "1st");
    assert(number_suffix(2, true) == "2nd");
    assert(number_suffix(3, true) == "3rd");
    assert(number_suffix(4, true) == "4th");
    assert(number_suffix(11, true) == "11th");
    assert(number_suffix(21, true) == "21st");
    std::cout<<"ALL TESTS PASSED!"<<std::endl;
}

int main() {
    run_tests();
    return 0;
}

