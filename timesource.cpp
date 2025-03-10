# include <iostream>
# include <iomanip>
int difftime1;
int difftime2;
int sub_total;
int min_calc(int hours1, int hours2, int min1, int min2){
    difftime1 = (hours1 * 60) + min1;
    difftime2 = (hours2 * 60) + min2;
    sub_total = abs(difftime1 - difftime2);
    return sub_total;
}
int diffHours;
int diffMin;
void hour_calc(int hours1, int hours2, int min1, int min2 ,int &diffHours, int &diffMin){
    difftime1 = (hours1 * 60) + min1;
    difftime2 = (hours2 * 60) + min2;
    sub_total = abs(difftime1 - difftime2);
    diffHours = sub_total / 60;
    diffMin = sub_total % 60;
}
double total;
double main_hours;
void hours_calc(int hours1, int hours2, int min1, int min2, double &main_hours){
    difftime1 = (hours1 * 60) + min1;
    difftime1 = (hours1 * 60) + min1;
    difftime2 = (hours2 * 60) + min2;
    total = difftime1 - difftime2;
    main_hours = total / 60;
}
