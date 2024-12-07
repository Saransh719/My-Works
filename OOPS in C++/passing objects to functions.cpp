#include<iostream>
using namespace std;

class student
{   public:
        string name;
        int rno;
        float gpa;
};

void print(student s)
{
    cout << s.name << " " << s.gpa << " " << s.rno <<endl;
}

//checking for pass by value or reference
void change(student s)
{
    s.name="BCD";
}

void change_by_reference(student& s)
{
    s.name="BCD";
}

int main()
{
    student s1;
    s1.name="ABC";
    s1.rno=72;
    s1.gpa=9.5;
    print(s1);
    change(s1);
    print(s1); //it is pass by value
    change_by_reference(s1);
    print(s1);   //it is pass by refernce due to c++ references
}