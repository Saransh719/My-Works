#include<stdio.h>
#include<string.h>

typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
//declaring datatype outside of main so that it can be recognised by other functions

void print(pokemon p)
{
    printf("%d",p.hp);
    printf("%d",p.attack);
    printf("%d",p.speed);
}

void change(pokemon p)
{
    p.attack=80;
    p.speed=90;
}
void main()
{
    
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.speed=100;
    pikachu.attack=60;
    change(pikachu);        //checking if pikachu is also changed or it is passed by value
    print(pikachu);
    //from this, we can see that structures are passed by value and not reference (unlike arrays)

}