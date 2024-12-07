#include<iostream>
using namespace std;

class scooty
{
    public:
        int top_speed;
        float mileage;
        void sound()
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
    bike b1,b2;
    b1.sound();
    b2.sound();
    scooty s1,s2;
    s1.sound();
    s2.sound();
}