#include<stdio.h>
#include<string.h>

void main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    //now, lets assume a legendary pokemon has all these attributes but also has an ability
    //then, instead of writing all of this again for legendary pokemon (hp,speed,etc) we can use nested structure

    typedef struct legendary_pokemon
    {
        pokemon normal;                //we can write anything in place of normal to represent any pokemon
        char ability[10];
    } legendary_pokemon;

    legendary_pokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    //how to access the nested except ability
    mewtwo.normal.hp=100;
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.speed=150;
    mewtwo.normal.attack=200;
    mewtwo.normal.tier='L';

    //nesting inside nested structure
    typedef struct godpokemon{
        legendary_pokemon legend;
        int special_attack;
    } godpokemon;

    godpokemon arceus;
    strcpy(arceus.legend.ability,"Multitype");
    arceus.special_attack=200;
    arceus.legend.normal.hp=200;
    
}