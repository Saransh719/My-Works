#include<iostream>
#include<vector>
using namespace std;


//BTS FOR VECTOR
//Vector is an array behind the scene with 2 properties, size and capacity
//size means currently used size (index of last element which is not used)
//capacity means total capacity
//initially, both are 0, then both are 1 if something is added (capacity can also be started from 1)
//after that, if we have to add something, capacity is doubled each time size==capacity
//when anything is popped, the element just before that is considered the final element i.e. capacity is not changed, just size is reduced
//if we add anything after that, that index which we popped before is now considered and its value is changed to new value 

//vectors are a resizable array
//vector<datatype> name;   ->declaration
int main()
{
    vector<string> cars={"Volvo", "BMW", "Ford", "Mazda"};
    // for (string car : cars) 
    //     cout << car << "\n";
    // cout << cars[0];           //can access using index

    //using front and back present in vector library
    cout <<cars.front() << "\n" << cars.back() << "\n";

    cout <<cars.at(2) << "\n";     //2 is index

    //it is preffered over [] because it gives error for out of index unlike [] which returns nothing
    cout <<cars[6] << "\n";
    // cout << cars.at(6) << "\n";

    //can also use at to change an element just like [] 


    //GROWING THE VECTOR
    cars.push_back("Maruti");
    cout << cars.back() << "\n";
    cout << cars.size() << "\n";
    cars.pop_back();
    cout << cars.back() << "\n";
    cout << cars.size() << "\n";

    cout << cars.empty() << "\n";

    while (!cars.empty())             //cars.empty() return 1 if vector is empty
    {
        cars.pop_back();
    }
    
    cout << cars.size() << "\n";
    cout << cars.empty();
    
}