#include<iostream>
using namespace std;

class cricketer
{
    public:
        string name;
        int runs;
        cricketer(string name, int runs)
        {
            this->name=name;
            this->runs=runs; 
            //if this keyword was not used, name would have only reffered to the local variable (in which the values are temporarily stored before going into object)
            // The local variable is in the scope of constructor and not the name and string specified in class
            //therefore, there would have been no value in c1 and c2 and garbage value would have appeared
        }
};

int main()
{
    cricketer c1("ABC",1000);
    cricketer c2("DEF",10032);
}