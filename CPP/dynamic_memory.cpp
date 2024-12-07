#include<iostream>
using namespace std;

int main()
{
    int x=2;
    int* ptrx=&x;

    //instead use
    int* ptr=new int(2);
    //this pointer is pointing to a block in memory which stores the value 2 but has no name

    int* arr=new int[10];   //integer array is made in dynamic memory

    cout <<ptr << endl;
    delete ptr;
    cout << *ptr << endl;  //garbage value printed
    ptr=NULL;
    cout << ptr;
}