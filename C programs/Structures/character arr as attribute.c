#include<stdio.h>
#include<string.h>

void main()
{
    struct book
    {
        int pages;
        float price;
        char name[30];          //now, after initialising array like this, we cannot give it a value via name="" as that is wrong, thus we use a workaround by copying the string to name
    };
    
    struct book s7;
    s7.pages=201;
    s7.price=107.21;
    strcpy(s7.name,"Secret seven");   //this is a nice workaround to not use s7.name[0] [1] etc

}