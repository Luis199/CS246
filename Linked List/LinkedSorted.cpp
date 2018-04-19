// Luis Casado
// CS 246
// Dr. Austin

using namespace std;
#include <iostream>
#include <cstdlib>

int main()
{
  int random;
  srand (time(NULL));

  for(int i = 0; i < 12; i++)
  {
    random = rand() % 60 + 1;
    cout << random << endl;
  }

  return 0;
}
