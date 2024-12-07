#include<iostream>
using namespace std;

class cricketer
{
    public:
        int runs;
        int wickets;
        float average;
};

class engineer
{
    public:
        int experience;
        string domain;
};

class badiya : public cricketer , public engineer          //this class has inherited from both cricketer and engineer
{
    public:
        string name;
};