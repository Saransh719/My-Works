#include<stdio.h>
#include<string.h>

void main()
{
    typedef struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;
    pokemon a,b,c;

    a.speed=100;
    a.hp=120;
    a.attack=90;
    a.tier='b';
    strcpy(a.name,"Chansey");

    //one way to copy a is to write many likes like b.attack=a.attack etc
    //but there is an easier way 
    b=a;  
    //now a is copied into b
    strcpy(b.name,"Venusaur");
    printf("%s",b.name);
}