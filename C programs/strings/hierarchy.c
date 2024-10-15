#include<stdio.h>
void main()
{
    char str[]="Hello";
    str[0]='t';
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    str[0]=97;    //replaced with ascii value
    i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}