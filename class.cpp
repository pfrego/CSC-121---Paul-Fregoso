#include <cassert>
#include <iostream>
using namespace std;
class Student {
    private:
    string FName;
    string LName;
    public:
    Student(string first_name, string last_name) {
        FName = first_name;
        LName = last_name;
 
    }
    void setFName(string first_name){
        FName = first_name;
    }
    string getFName(){
        return FName;
    }

    
};
 
int main() {
  Student Student("Paul", "Fregoso");
 
  assert(Student.getFName()== "Paul");
 
  return 0;
}
