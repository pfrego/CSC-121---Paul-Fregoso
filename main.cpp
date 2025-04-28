

#include <iostream>
using namespace std;

int main(){
// Exercise 1
    int  a; int b;
    cout << "Enter value of A: ";
    cin >> a;
    cout << "Enter value of B: ";
    cin >> b;

    int *ptrA=&a;
    int *ptrB=&b;

    cout << "Value of ptrA is " << *ptrA << " sored in address "<< ptrA<<"\n";
    
    cout << "Value of ptrB is " << *ptrB <<" sored in address "<< ptrB<<"\n";
// Exercise 2
    int n;int i; int max=0;
      cout<<"Enter number of values:";
      cin>>n;

      cout<<"Enter values in array:\n";
      int arr[n];
      for(i=0;i<n;i++) {

       cin>>arr[i];
      }


      for(int u=0;u<=n;u++){
       if (arr[u]>max)
         max=arr[u];
      }

      int *pointer= &max;


      cout<<"Largest integer value in the array is "<<*pointer;
// Exercise 3
    
// Exercise 4
    
// Exercise 5
    return 0;
}
