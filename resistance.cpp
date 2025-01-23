#include <iostream>
int main(){
    double r1 = 0.0;
    double r2 = 0.0;
   
    std::cout<<"Please enter a number for r1: \n";
    std::cin>>r1;
    std::cout<<"The resistance of r1 is "
    << r1
    << " ohms \n";
    std::cout<<"Please enter a number for r2: \n";
    std::cin>>r2;
    std::cout<<"The resistance of r2 is "
    << r2
    << " ohms \n";
    std::cout<<"The total resistance of r1 + r2 is "
    << r1 + r2
    << "\n";
    double req = 1/r1 + 1/r2;
    double total = 1/req;
    std::cout<<"The total resistance of 1/r1 + 1/r2 is "
    << total
    << "\n";
    std::cout<<"Thank you for using this program! \n";
}
