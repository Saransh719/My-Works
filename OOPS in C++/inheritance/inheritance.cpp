//3 types of inheritance
// one parent has many childs                               --> single inheritance
//one parent has one child and that child has a grandchild  --> multi level inheritance
//one child has 2 parents                                   --> multiple inheritance



#include<iostream>
using namespace std;

class scooty
{
    public:
        int top_speed;
        float mileage;
    private:
        int bootspace;
};

//now a bike is just scooty + gear - bootspace

class bike : public scooty        //this is called a child class / derived class,     bike is extension of scooty
//only public data is imported
{
    public:
        int gear;
};

int main()
{
    bike b1;
    b1.top_speed=023;
}


//this was single inheritance