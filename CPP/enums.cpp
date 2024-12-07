#include<iostream>

using namespace std;

int main()
{
    enum level
    {
        LOW,
        MID,
        HIGH,           //comma not required in last
    };
    //now, level is a user defined datatype which can only have the values low,mid and high and defailt values of low=0, mid=1, high=2
    enum level var=LOW;
    cout << var<<endl;


    //changing default values
    typedef enum level2
    {
        LOW2=25,
        MID2=50,
        HIGH2=75,           
    }level2;

    level2 var2=LOW2;    //just like structures typedef
    cout << var2 << endl;

    //NOTE-: 2 enums cannot have same item names like LOW
    
    //only giving one default value
    typedef enum level3
    {
        LOW3=32,
        MID3,
        HIGH3
    }level3;
    //values are automatically assigned to other 2 by incrementing first one
    level3 var3=MID3;
    cout << var3<<endl;
}