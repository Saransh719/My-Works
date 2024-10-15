#include<stdio.h>
#include<string.h>
void main()
{
    char s[40]="Hello World";
    int x=strlen(s);             //strlen
    printf("%d",x);

    char s2[12];
    strcpy(s2,s);               //makes deep copy

    char s3[]="WOW";
    strcat(s,s3);               //initial string array must have size of concatenated string
    printf("%s",s);

    //strcmp gives boolean as output after comparing
}