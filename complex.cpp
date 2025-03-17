#include <string>
#include <cmath>
#include "complex.hpp"
using namespace std;
Complex::Complex(double r, double i)
{
  real = r;
  imag = i;
}

string Complex::prettyprint()
{
  return to_string(real) + " + " + to_string(imag) + "i";
}

double Complex::getReal()
{
  return real;
}

double Complex::getImag()
{
  return imag;
}

Complex Complex::add(Complex n)
{
  double real_sum = real + n.getReal();
  double imag_sum = imag + n.getImag();
  return Complex(real_sum, imag_sum);
}
Complex Complex::sub(Complex n)
{
    double real_diff = real - n.getReal();
    double imag_diff = imag - n.getImag();
    return Complex(real_diff, imag_diff);
}
Complex Complex::mult(Complex n)
{
    double newReal = (real * n.getReal()) - (imag * n.getImag());
    double newImag = (real * n.getImag()) + (imag * n.getReal());
    return Complex(newReal, newImag);
}
Complex Complex::divide(Complex n)
{
    double denominator = (n.getReal() * n.getReal()) + (n.getImag() * n.getImag());
    if (denominator == 0) {
        throw runtime_error("Division by zero error in complex number division.");
    }
    double newReal = ((real * n.getReal()) + (imag * n.getImag())) / denominator ;
    double newImag = ((imag * n.getReal()) - (real * n.getImag())) / denominator;
    return Complex(newReal, newImag);
}
Complex Complex::negation(Complex n)
{
    return Complex(-real, -imag);
}
Complex Complex::mag(Complex n)
{
    double magnitude = sqrt(n.getReal() * n.getReal() + n.getImag() * n.getImag());
    return Complex(magnitude);
}
Complex Complex::conj(Complex n)
{
    return Complex(real, -imag);
}
Complex Complex::RP(Complex n)
{
    return Complex(n.getReal());
}
string Complex::pp()
{
    return to_string(real);
}
Complex Complex::IP(Complex n)
{
    return Complex(n.getImag());
}
string Complex::PP()
{
    return to_string(imag);
}
