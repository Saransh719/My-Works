#include<iostream>
using namespace std;

class Fraction
{
    public:
        int num;
        int den;
        Fraction(int num, int den)
        {
            this->num=num;
            this->den=den;
        }

        void display()
        {
            cout << num << "/" << den << endl;
        }
    
        //now, we have to make a method add, but instead of making it with the name add and using like f1.add(f2), we can make it such that the + operator will handle the operation
        //this is called operator overloading as + operatio can take int, float, string AND now fraction type too as arguments

        Fraction operator+(Fraction f)            //this method means that fraction type is being returned, the call is by using operator + and f is the fraction on rhs
        {
            int newNum= this->num*f.den + f.num*this->den;   //new numerator
            int newDen=  f.den*this->den;                   //new denominator
            Fraction newf(newNum,newDen);                   //new fraction object
            return newf;                                    //returns the new fraction
        }
    
};

int main()
{
    Fraction f1(2,3);
    Fraction f2(4,5);
    f1.display();
    f2.display();
    Fraction f3=f1+f2;     //we can declare f3 like this because f1+f2 is returning a new class
    f3.display();
    //we can make the same for -, * and / too
}