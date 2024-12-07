#include<iostream>
using namespace std;

class student      //this is a datatype
{   public:
        string name;
        int rno;
        float gpa;
};

int main()
{
    student s;
    s.name="ABC";
    s.rno=72;
    s.gpa=9.5;
    return 0;
}