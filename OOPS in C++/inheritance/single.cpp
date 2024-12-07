#include<iostream>
using namespace std;

class vehicle
{
    public:
        int top_speed;
        float mileage;
        string fuel;
};


class car : public vehicle        
{
    public:
        bool sunroof;
};

class bike : public vehicle
{
    public:
};

class truck : public vehicle
{
    public:
};