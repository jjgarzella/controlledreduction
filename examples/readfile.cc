// Copyright 2013-2017 Edgar Costa, Jack J Garzella
// See LICENSE file for license details.

#include "wrapper.h"
#include <fstream>

using namespace std;
using namespace NTL;



int main(int argc, char** argv)
{
  if (argc < 3) {
    fprintf(stderr, "Usage:\n %s input_filename output_filename\n", argv[0]);
  }

  ifstream f;
  int length;
  f.open(argv[1]);
  f.seekg(0, std::ios::end);
  length = f.tellg();
  f.seekg(0, std::ios::beg);
  char * input = new char[length];
  f.read(input, length);
  f.close();


  ZZX out;
  Mat<ZZ> Frob;
  zeta_function(out, Frob, input, true, 1);

  ofstream o(argv[2]);
  o << out << endl;


  return 0;

}

