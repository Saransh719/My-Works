#include<stdio.h>
void main()
{
    // char arr[]="Hello\0";
    // int i=0;
    // while (arr[i]!='\0')
    // {
    //     printf("%c",arr[i]);
    //     i++;
    // }
    
    //another advantage of this method is that compiler automatically puts \0 at the end of string  , (therefore size of string is +1)

    char arr[]="Hello";
    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }   //code still runs
}