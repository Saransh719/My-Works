#include<iostream>
using namespace std;

class Vector
{
    public:
        int size;           //size is index of last element+1 which means no of elements in array
        int capacity;
        int* arr;           //the array which is going to be created to store data (it is going to be changed many times as discussed)

        Vector()    //initialising the vector kinda using default constructor
        {
            size=0;
            capacity=1;
            arr= new int[1];
        }

        void add(int ele)
        {
            if (size==capacity)
            {
                capacity*=2;
                int* arr2=new int[capacity];
                //copying elements into new array which would be double the size
                for (int i=0;i<size;i++)
                {
                    arr2[i]=arr[i];
                }
                arr=arr2;         //arr is now pointing to new array
            }

            // arr[size]=ele;     //not written in else as even after doubling capacity, we still have to add element anyways
            // size++;            //size+1 because one element has been added

            //instead of writing the above, we can write
            arr[size++]=ele;  //post increment
        }

        void print()
        {
            for (int i=0;i<size;i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            cout << "Size is " << size << endl;
            cout << "Capacity is " << capacity << endl;
            
        }

        int get(int index)
        {
            if (size==0) 
            {
                cout << "Array is empty" <<endl;     //just for better output, error would have been handled anyways via other if 
                return -1;
            }
            if (index>=size)
            {
                cout << "Invalid index" << endl;
                return -1;
            }
            return arr[index];
        }

        void remove()
        {
            if (size==0) 
            {
                cout << "Array is empty" <<endl;
            }
            size--;
        }
};

int main()
{
    Vector v;
    v.print();
    v.add(10);
    v.print();
    v.add(20);
    v.print();
    v.add(15);
    v.print();
    v.add(40);
    v.print();
}