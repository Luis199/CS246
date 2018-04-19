#include "Node.h"
#include <iostream>
using namespace std;

int main()
{
  node *p, *q, *r;
  p = new node;
  q = new node(4.9);
  r = new node (1.6, p);

  cout << (*q).data();
  p = q;


  return 0;
}
