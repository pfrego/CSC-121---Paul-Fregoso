#include <iostream>
#include <cmath>
#include "complex.hpp"
using namespace std;
int main()
{
  cout << "Hello and welcome to the driver program!" << endl;
  cout << "Please enter a complex number separated by spaces" << endl;

  double r1, i1;
  cin >> r1 >> i1;

  cout << "Please enter another complex number separated by spaces" << endl;

  double r2, i2;
  cin >> r2 >> i2;

  Complex a(r1, i1);
  Complex b(r2, i2);
  cout << "The first number is: " << a.prettyprint() << endl;
  cout << "The second number is: " << b.prettyprint() << endl;

  cout << "Their sum is: " << a.add(b).prettyprint() << endl;
  cout << "Their difference is: " << a.sub(b).prettyprint() << endl;
  cout << "Multiplied: " << a.mult(b).prettyprint() <<endl;
  cout << "Divided: " << a.divide(b).prettyprint() << endl;
  cout << "Negated: " << a.negation(a).prettyprint() << " and " << b.negation(b).prettyprint() << endl;
  cout << "Magnitude: " << a.mag(a).prettyprint() << " and " << b.mag(b).prettyprint() << endl;
  cout << "Conjugated: " << a.conj(a).prettyprint() << " and " << b.conj(b).prettyprint() << endl;
  cout << "Real Part: " << a.RP(a).pp()<< " and " << b.RP(b).pp() << endl;
  cout << "Imaginary Part: " << a.IP(a).PP() << " and " << b.IP(b).PP() << endl;

  cout << "Goodbye!" << endl;
}

