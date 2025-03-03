#include <iostream>

using namespace std;


void carrotprint(){

    std::cout << R"(
       ^
 )" << '\n';

    
}



void xaxis(){

    std::cout << R"(
       +- - - - - ->
)" << '\n';
    
}



void yaxis(){

    std::cout << R"(
    |
    |
    |
    |         
    |
  )" << '\n';
}



int main(){

    cout<<"Enter the x-coordinate that you want to plot: ";
    int x;
    cin>>x;

    carrotprint();
    xaxis();
    yaxis;
    cout<<"Enter the y-coordinate that you want to plot: ";
    int y; 
    cin>>y;

    

    
}
