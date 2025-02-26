#include <iostream>
 
using namespace std;
 
void pass_by_reference(string &my_string) {
    my_string = "Pass by reference";
}
 
void pass_by_value(string my_string) {
    my_string = "Pass by value";
}
 
int main() {
  string my_string = "This is a string";
  cout << my_string << endl;
  pass_by_value(my_string);
  cout << my_string << endl;
  pass_by_reference(my_string);
  cout << my_string << endl;
  return 0;
}
