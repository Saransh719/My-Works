#include<iostream>
using namespace std;

class vehicle
{
    public:
        int top_speed;
        float mileage;
        string fuel;
};


class four_wheeler : public vehicle        
{
    public:
        bool sunroof;
};

class two_wheeler : public vehicle
{
    public:
};

class truck : public vehicle
{
    public:
};

//this was single
//now multi

class bike : public two_wheeler
{
    public:

};

class scooty : public two_wheeler
{
    public:
};

//these two are multi level inheritance, grandchild of vehicle class

