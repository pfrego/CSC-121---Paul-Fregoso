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
    int IDnum(){
        srand(time(0));
        return (1 + (rand()%100000));
    }
    string getFName(){
        return FName;
    }
    string getLName(){
        return LName;
    }
    int getIDnum(){
        return IDnum();
    }
    string speak(){
        return "Hello my name is " + FName;
    }

    
};
 
int main() {
Student student("Paul", "Fregoso");
 
    assert(student.getFName() == "Paul");
    assert(student.getIDnum() == 100000);
    cout << student.speak()<<endl;
    cout << "ID#" << student.getIDnum() << endl;
 
  return 0;
}
