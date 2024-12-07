#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b;
    string hello;
    // hello="Hello";
    getline(cin,hello);
    cout<<hello<<"\n";
    //NOTE 
    //STRING CONCATENATION WORKS IN CPP (can also use append function)   new_str=str1.append(str2);

    //MATH
    //max and min for 2 numbers is predefined
    //to use sqrt,round,log #include<cmath>

    //LOOPING INTRODUCED IN C++ 11
    //LIKE PYTHON for i in list, etc
    int arr[5]={1,2,3,4,5};
    for (int i : arr) cout << i << "\n";    //can also be used in string array etc



    // cout <<"Hello " << "Testing ";
    // cin >>a >>b;
    // cout <<a<<b;

    cerr << "This is error";   //this is not buffered to display later
    return 0;
}