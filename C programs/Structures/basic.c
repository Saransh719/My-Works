// structures are user defined data types used to store data of different data types (like an array with different data types as elements)

#include<stdio.h>
void main()
{
    struct pokemon
    {
        int hp;
        int attack;
        int speed;       //we can also use different data types as this is struct, example like tier
        char tier;       // S, A , B ,C ,D
    }charizard;        //now we dont need to declare charizard (Can also add more using ,)

    struct pokemon pikachu;
    pikachu.attack=60;
    printf("Enter attack of pikachu");
    scanf("%d",pikachu.attack);
    pikachu.speed=100;
    pikachu.tier='S';
    
    charizard.attack=100;     //charizard is already declared
    charizard.hp=120;
    charizard.speed=150;
    charizard.tier='S';

    printf("The attack of pikachu is %d",pikachu.attack);
    
}