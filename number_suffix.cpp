#include "number_suffix.h"

std::string number_suffix(int n, bool include_number) {
    
    if (n <= 0) {
        return "";
    }
    
    
    std::string suffix = "th";
    
    
    int last_digit = n % 10;
    int last_two_digits = n % 100;
    
    if (last_two_digits >= 11 && last_two_digits <= 13) {
        suffix = "th";
    } else {
        switch (last_digit) {
            case 1:
                suffix = "st";
                break;
            case 2:
                suffix = "nd";
                break;
            case 3:
                suffix = "rd";
                break;
        }
    }
    
   
    if (include_number) {
        return std::to_string(n) + suffix;
    } else {
        return suffix;
    }
}

