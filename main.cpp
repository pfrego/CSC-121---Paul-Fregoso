# include <iostream>
# include <iomanip>
# include "time.h"
using namespace std;
int main (){
    int hours1 = 0;
    int hours2 = 0;
    int min1 = 0;
    int min2 = 0;
    int diffHours, diffMin;
    double main_hours;
    cout << "Welcome to the Time Calculation Program! \n" << "Enter your first time: ";
    cin >> hours1 >> min1;
    cout << "Enter your second time: ";
    cin >> hours2 >> min2;
    cout << "The time interval can be written as: \n" << min_calc(hours1, hours2, min1, min2) << " minutes\n";
    hour_calc( hours1, hours2, min1, min2 ,diffHours, diffMin);
    cout << diffHours << " hours and " << diffMin << " minutes\n";
    hours_calc(hours1, hours2, min1, min2, main_hours);
    cout << fixed << setprecision(2);
    cout << main_hours << " hours\n";
    cout << "Thank you for using the Time Interval Calculation Program.\n";
     
}
