# include <iostream>
# include <cmath>
int main () {
    int oz = 0.0;
    std::cout<<"How many ounces do you have? \n";
    std::cin>>oz;
    std::cout<<"You have "<<oz<<" ounces"<< "\n" << "Converting ounces to pounds... \n";
    int i = oz/16;
    std::cout<< oz <<" oz is equivalent to "<< i << " lbs and "<< oz%16 << " oz\n";
    
    double e = oz * 0.0625;
    std::cout<< oz <<" oz is equivalent to " << e << " lbs \n" << "Thank you for using this program! \n";
    
    return 0;
}
