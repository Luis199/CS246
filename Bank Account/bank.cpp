// Luis Casado
// Bank program
// CS 246
// 02 - 27 - 2018
#include <iostream>
#include<cassert>
#include "bank.h"

using namespace std;

void options();

int main()
{
  void options();
  display();
  options();




    return 0;
}
void options()
{
  int choice;
  cout << "1. Account Balance\n";
  cout << "2. Withdrawal Money \n";
  cout << "3. Deposit Money \n";
  cout << "4. Transfer Money \n";
  cin >> choice;
switch (choice)
{
  case 1:
  cout << "Display account balances";
  break;
  case 2:
  cout << "Withdrawal the money";
  break;
  case 3:
  cout << "No more excuses";
  break;
  case 4:
  cout << "La ultima";
  break;

  default:
  cout << "Please enter one of the options\n";
}


};
