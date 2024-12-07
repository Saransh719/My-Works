#include<iostream>
using namespace std;

class student
{   public:
        string name;
        int rno;
        float gpa;

        student(string name,int rno, float gpa)
        {
            this->name=name;
            this->rno=rno;
            this->gpa=gpa;
        }

        void print()
        {
        cout << name << " " << gpa << " " << rno <<endl;
        }
};


int main()
{
    student s1("ABC",21,9.2);
    student s2("BCD",22,9.3);

    student* ptr1 = &s1;
    cout << (*ptr1).name <<endl;

    //editing   
    (*ptr1).gpa=9.9;
    cout << (*ptr1).gpa <<endl;

    //directly
    ptr1->rno=23;
    cout << ptr1->rno <<endl;


    //dynamic memory allocation
    student* ptr2=new student("DEF",32,8.8);
    ptr2->print();
}