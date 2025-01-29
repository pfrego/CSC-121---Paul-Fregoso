#include <iostream>
using namespace std;
int main(){
    int num = 0;
    cout<<"Problem 1... \n" << "Choose a number: \n";
    cin>>num;
    if(num % 3 == 0){
        cout<<"Fizz \n";
    }
    if(num % 5 ==0 ){
        cout<<"Buzz \n";
    }
    if (num % 3 == 0 && num % 5 == 0){
        cout<<"FizzBuzz \n";
    }else {
        cout<<num << "\n";
    }
    
    cout<<"Problem 2...\n";
    
    int i = 0;
    for(int i = 0; i < 101; i++){
        cout<< i << endl;
    }
    
}
