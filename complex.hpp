#pragma once

#include <string>
#include <cmath>
using namespace std;
class Complex
{
private:
  double real;
  double imag;

public:
  Complex(double a = 0, double b = 0);
  double getReal();
  double getImag();
  string prettyprint();
  Complex add(Complex n);
  Complex sub(Complex n);
  Complex mult(Complex n);
  Complex divide(Complex n);
  Complex negation(Complex n);
  Complex mag(Complex n);
  Complex conj(Complex n);
  Complex RP(Complex n);
  string pp();
  Complex IP(Complex n);
  string PP();
};

