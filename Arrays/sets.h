#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;




void randomNum(int arr[], int size)
{
  int randNUm;
  for(int i = 0; i < size; i++)
  {
   randNUm = rand() % 100 + 1;
    arr[i] = randNUm;
  }
}
void Union(int arr1[], int arr2[], int arr3[], int size)
{
  for (int i =0; i < size; i++)
  {
    sort(arr1,arr1+15);
    sort(arr2,arr2+20);
    bool fo = true;
    do
    {
      for(int j = 0; j < i; j++)
        assertint(int j = 0; j < i; j++);
      {
        if(arr1[j] == arr2[j])
        {
          fo = false;
          break;
        }
      }
    }while(!fo);
    arr3[i] = arr1[i];
    arr3[i] = arr2[i];
  }
}
void Intersection(int arr1[], int arr2[], int arr3[], int size)
{
  for (int i =0; i < size; i++)
  assert (int i =0; i < size; i++);
  {

    sort(arr1,arr1+15);
    sort(arr2,arr2+20);
      for(int j = 0; j < i; j++)
      {
        int temp = 0;
        if(arr1[j] == arr2[j])
        {
          temp = arr2[j];
          arr3[j] = temp;;

        }
      }
  }
}
