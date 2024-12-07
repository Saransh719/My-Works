#include<iostream>
using namespace std;

class student
{   public:
        string name;
        int rno;
        float gpa;

        //this is a constructor
        //the values written in main will be assigned to s,r and g which will then assign them to the values in the object given while declaration
        //these are used to initialise objects easily
        student(string s,int r,float g)   //this is called a parameterised constructor, we can have more than one with different number of parameters,like below
        {
            name=s;
            rno=r;
            gpa=g;
        }

        //before we had this, we had a default constructor but after we made our own constructor, this was removed
        //now if we want to create an object using previous method, we have to create this on our own
        //it is like an empty function
        student(){};   

        //making another parameterised constructor
        student(string s,int r)
        {
            name=s;
            rno=r;
        }
        //this is same as above but order shuffled, so if input is int then string, this one will be used
        student(int r,string s)
        {
            name=s;
            rno=r;
        }
        //THIS IS CALLED CONSTRUCTOR OVERLOADING
};

void print(student s)
{
    cout << s.name << " " << s.gpa << " " << s.rno <<endl;
}

int main()
{
    student s1("ABC",20,9.2);
    print(s1);

    student s2;
    s2.name="BCD";
    s2.gpa=9.1;
    s2.rno=12;
    print(s2);

    student s3("DEF",13);
    s3.gpa=8.3;
    print(s3);
    
    student s4(10,"GHI"); //fourth constructor is being used
    print(s4);

    student s5=s1;  //deep copy is being created
    print(s5);
    s5.name="RANDOM";
    print(s5);

    student s6(s1);      //this is copy constructor and also a deep copy, same as above

}

