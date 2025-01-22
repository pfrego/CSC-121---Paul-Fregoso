#include <iostream>
#include <cmath>
int main(){
    double x1 = 0.0 ,y1 = 0.0 ;
    double x2 = 0.0 , y2 = 0.0 ;
    std::cout<<"Enter your first point: \n";
    std::cin>>x1;
    std::cin>>y1;
    std::cout<<"Enter your second point: \n";
    std::cin>>x2;
    std::cin>>y2;
    
    double w = x1+x2;
    double z = y1+y2;
    double j = w/2;
    double p = z/2;
    
    std::cout<<"The midpoint of "<< "(" << x1 << ","<< y1 << ")" <<" and "<< "(" << x2 << ","<< y2 << ")" <<" is "<< "(" << j<< ","<< p << ")"<< "\n";
    return 0;
}
