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

        int marks()
        {
            return (gpa*10);
        }

};


int main()
{
    student s1("ABC",21,9.2);
    s1.print();
    cout << "Marks are " << s1.marks() << endl;
}