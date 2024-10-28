#include<stdio.h>
#include<string.h>
void main()
{
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;

    pokemon arr[3];
    
    strcpy(arr[0].name,"pikachu");
    arr[0].attack=50;
    arr[0].hp=60;
    arr[0].speed=100;
    arr[0].tier='A';

    strcpy(arr[1].name,"charizard");
    arr[1].attack=150;
    arr[1].hp=100;
    arr[1].speed=140;
    arr[1].tier='S';

    strcpy(arr[2].name,"rayquaza");
    arr[2].attack=200;
    arr[2].hp=150;
    arr[2].speed=160;
    arr[2].tier='L';      //lol

    for (int i=0;i<=2;i++)
    {
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%c\n",arr[i].tier);
    }
    
}