#include <iostream>
using namespace std;

char* returnCharPointer(char* ptr) {
    return ptr;
}

float* intToFloatPointer(int* ptr) {
    return reinterpret_cast<float*>(ptr); }

void checkOddEven(int* ptr) {
    if (*ptr % 2 == 0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;
}

class MyClass {
public:
    void pp() {
        cout << "MyClass::pp() was called!" << endl;
    }
};

void callPP(MyClass* objPtr) {
    if (objPtr != nullptr) {
        objPtr->pp();
    }
}

int main() {
    cout << "Pointer Exercises";
    char c = 'x';
    char* cptr = &c;
    cout << "Char pointer points to: " << *returnCharPointer(cptr) << endl;

    int num = 7;
    int* iptr = &num;
    checkOddEven(iptr);

    float* fptr = intToFloatPointer(iptr);
    cout << "Reinterpreted int as float: " << *fptr << endl;

    MyClass obj;
    callPP(&obj);
    cout << "Pointer Exercise Successful!";
    return 0;
}

