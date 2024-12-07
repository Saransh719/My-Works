#include<iostream>
using namespace std;

int plusFunc(int x, int y) 
{
  return x + y;
}

int plusFunc(int x, int y,int z) 
{
  return x + y + z;
}

//here, we made 2 functions with the same name but different parameter data types, this is called function overloading

int main() 
{
  int myNum1 = plusFunc(8, 5);
  int myNum2 = plusFunc(8, 5, 3);
  cout << "2 parameters: " << myNum1 << "\n";
  cout << "3 parameters: " << myNum2;
  return 0;
}