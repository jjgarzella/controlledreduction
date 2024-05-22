// Copyright 2013-2018 Edgar Costa
// See LICENSE file for license details.


#include "wrapper.h"
#include <cstdlib>
#include <sstream>

using namespace std;
using namespace NTL;

int main()
{

  //format:
  // prime                  p = 7
  // monomial               y^2*z x^3 x*z^2 z^3
  // monomial coefficients  1 -1 -1 -1
  // --> y^2*z - x^3 - x*z^2 - z^3 over F_7
  //
  // REVLEX order actually?
  char buffer[] = "7\n[[1  2  0] [0  0  3]  [2  0  1]  [3  0  0]]\n[1 -1 -1 -1]";
  ZZX cp;
  Mat<ZZ> Frob;
  zeta_function(cp, Frob, buffer, true, 1);
  cout << Frob << endl;
  cout << cp << endl;

  return 0;
}
