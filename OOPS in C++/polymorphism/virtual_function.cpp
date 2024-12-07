#include<iostream>
using namespace std;

class scooty
{
    public:
        int top_speed;
        float mileage;
        virtual void sound()                //if this virtual was not given, ptr sound would give vroom vroom instead of broom broom, thus, virtual makes the function call the correct method irrespective of the type of function called
        {
            cout << "Vroom Vroom" << endl;
        }
};

class bike : public scooty        //this is called a child class / derived class,     bike is extension of scooty
{
    public:
        int gear;
        void sound()
        {
            cout << "Broom Broom" << endl;  
        }
};

int main()
{
    bike b;
    scooty* ptr=&b;
    //here, we stored bike type in the pointer for scooty datatype, this is legal unless we need to access gear and only methods are changing
    //this is used if we want to make an array or vector of objects as they need to be of same datatype

    ptr->sound();
    
}