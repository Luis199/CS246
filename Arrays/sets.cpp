// Luis Casado
//03 - 09 - 2018
// This program shows the uninon and Intersection of two sets

#include <cassert>
#include <iostream>
#include "sets.h"
using namespace std;

int main()
{
  int A[15];
  int B[20];
  int C[20];
  int temp[35];
  randomNum(A,15);
  randomNum(B,20);
  Union(A,B,C,20);
  Intersection(A,B,C,20);

  for (int i = 0; i < 20; i)
  assertint (i = 0; i < 20; i);
  {
    cout << C[i] << " ";
  }
  return 0;
}
