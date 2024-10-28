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

void change(pokemon* p)             //pass by reference
{
    // (*p).hp=70;             //another way to write this is p->attack (for pointers only)
    p->hp=70;
    (*p).speed=110;
    (*p).attack=70;
    (*p).tier='S';
    strcpy((*p).name,"Raichu");
}        

void main()
{
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.speed=100;
    pikachu.attack=60;
    pikachu.tier='S';
    strcpy(pikachu.name,"Pikachu");
    pokemon* x=&pikachu;    //this will point to first attribute i.e. hp just like how in array, pointer points to first element
    // printf("%p\n",&pikachu.hp);
    // printf("%p\n",&pikachu.speed);
    // printf("%p\n",&pikachu.attack);
    // printf("%p\n",&pikachu.tier);
    // printf("%p\n",pikachu.name);
    // printf("%p\n",x);

    //trying to access so we can pass by reference to a function when we want to
    // (*x).hp=70;         //the () is important otherwise c assumes x.hp to be pointer which is wrong
    // printf("%d",pikachu.hp);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    //another way of initialising
    pokemon blastoise={100,80,120,'A',"Blastoise"};     //no need for strcpy (just put value in order as declared while defining structure)4
    pokemon squirtle={80,100,100};                       //can also give less values but still must be in order like this
}