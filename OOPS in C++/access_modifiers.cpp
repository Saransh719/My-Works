#include<iostream>
using namespace std;

class student
{
    //all things in public can be accesed outside of the class, for both changing or printing
    public:
        string name;
        float marks;
        student(int rno, string name, float marks)
        {
            this->rno=rno;
            this->name=name;
            this->marks=marks;
        }
        student(){}
    //all elements in private cannot be accessed outside of class, be it for changing value or printing its value
    private:
        int rno;

    //if we want to make an element such that its value cannot be changed outside class, but it can be printed, we use getter
    public:               //could have also written in public above
        float getrno()      //getter
        {
            return rno;
        }

    //we can also change rno even while it is private
        void changerno(int rno)
        {
            this->rno=rno;
        }


    //there is another access modifier private which cannot be accesed outside class but can be accessed in a child class
};

int main()
{
    student s1(21,"Naam",90.5);    //here, we can access rno as first, 21 is being stored in a different rno variable which is in public, after that, all work is happening inside function so private variables can be accesed
    student s2;
    s2.name="Naam2";
    s2.marks=92.2;
    // s2.rno=2;                    //error


}