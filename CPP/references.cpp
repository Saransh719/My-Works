#include<iostream>
using namespace std;

int main()
{
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food
    cout << food << "\n";
    cout << meal;
    //but if meal is passed to a function, it would be pass by reference
    //meal has the same address as food unlike pointer which has its own new address
}