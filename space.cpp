#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double x = 0.0;
double y = 0.0;
double z = 0.0;
double r = 0.0;
double theta = 0.0;
double phi = 0.0;
double radius(double x, double y, double z){
    return r = sqrt(x*x+y*y+z*z);
}
double t(double x, double y, double z){
    return theta = acos(z/r);
}
double p(double x, double y, double z){
    return phi = atan(y/x);
}
double s1(double r, double phi, double theta){
    return x = r * cos(phi) * sin(theta);
}
double s2(double r, double phi, double theta){
    return y = r * sin(phi) * sin(theta);
}
double s3(double r, double phi, double theta){
    return z = r * cos(theta);
}
int main (){
    int choice = 0;
    cout << "Welcome to the Point Conversion Program!\n\n"<<"Enter your coordinates:\n\n"<<"(1) Cartesian Coordinates\n"<<"(2) Spherical Coordinates\n";
    cin >> choice;
    while (choice > 2){
        cout <<"That was not a valid choice!\n\n" << "Enter your coordinates:\n\n"<<"(1) Cartesian Coordinates\n"<<"(2) Spherical Coordinates\n";
        cin >> choice;
    }if(choice == 1){
        cout << "Enter in your coordinates, seperated by spaces:\n";
        cin >> x >> y >> z;
        cout << "Your point is as follows. Angles are in radians:\n\n"<<"Cartesian Coordinates: (" << x <<" , "<< y <<" , "<< z << ")\n";
        cout << fixed << setprecision(1);
        cout << "Spherical Coordinates: ("<< radius(x,y,z)<< " , " << p(x,y,z)<< " , " << t(x,y,z) << ")\n";
    }else if (choice == 2){
        cout << "Enter in your coordinates, seperated by spaces:\n";
        cin >> r >> phi >> theta;
        cout << "Your point is as follows. Angles are in radians:\n\n"<<"Spherical Coordinates: (" << r <<","<< theta <<","<< phi << ")\n";
        cout << fixed << setprecision(1);
        cout<<"Cartesian Coordinates: (" << s1(r,phi,theta)<<" , "<< s2(r,phi,theta)<< " , " <<s3(r,phi,theta)<< ")\n";
    }
    cout << "Thank you for using the Point Conversion Program!\n";
}
