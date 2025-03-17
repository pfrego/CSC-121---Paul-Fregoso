#include <iostream>
#include <cassert>
#include "complex.hpp"

using namespace std;

int main(){
    Complex a(3,4);
    Complex b(1,2);
    cout << "Starting tests..." << endl;
    assert(a.getReal() == 4);
    assert(b.getImag() == 6);
    assert(a.getReal() == 2);
    assert(b.getImag() == 2);
    assert(a.getReal() == -5);
    assert(b.getReal() == 14);
    assert(a.getReal() == 2.2);
    assert(b.getImag() == 0.4);
    assert(a.getReal() == -3);
    assert(b.getImag() == -4);
    assert(a.getReal() == 5);
    assert(a.getReal() == 3);
    assert(b.getImag() == 4);
    cout << "Tests are complete!" << endl;
}
