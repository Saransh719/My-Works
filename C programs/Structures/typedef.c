#include<stdio.h>
typedef float RealNumber; //now if we write RealNumber instead of float, it will work the same

void main(){
    int x;
    RealNumber y=1.2;
    printf("%f",y);

    //using this in structures
    typedef struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
    }pokemon;          //we can write anything but we wrote pokemon as it was easy

    pokemon pikachu;    //pikachu is defined just like this without writing structure pokemon pikachu like always
    pikachu.hp=12;     //now do as we always do


    //pointer problem solved using typedef
    int x=2,y=3;   //correct, no problem
    int* a=&x,b=&y;    //here only a is a pointer and b is not a pointer but an integer due to how int* is handled in c
    //to solve this, we use typedef
    typedef int* int_pointer;
    int_pointer c=&x,d=&b;   //here , both are pointers, problem solved

}