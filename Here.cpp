# include <iostream>
# include <cmath>

int main(){
    double x1 = 0.0, y1 = 0.0;
    double x2 = 0.0, y2 = 0.0;
    std::cout<<"Hello! Welcome to the Distance Program! \n"<<"Enter your first two points: \n";
    std::cin>> x1 >> y1;
    std::cout<<"Now enter your last two points: \n";
    std::cin>> x2 >> y2;
    std::cout<<"Calculating the distance now...\n";
    double d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    std::cout<<"The distance between (" << x1 << "," << y1 <<") and (" << x2 << "," << y2 << ") is " << d << "\n" << "Thank you for using this Program!";
    
}
