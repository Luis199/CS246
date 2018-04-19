#include "computer.h"

void computer::setColor(string c)
{
  color = c;
}
void computer::setBrand(string b)
{
  brand = b;
}
void computer::setMemory(int num)
{
  memory = num;
}
double computer::getColor() const
{
  return color;
}
double computer::getBrand() const
{
  return brand;
}
double computer::getMemory() const
{
  return memory;
}
