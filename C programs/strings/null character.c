// using a null character so that we dont have to count number of elements in character array
//represented by \0  , its ascii value is 0 (remember that ascii value of 0 is 48)
#include<stdio.h>
void main()
{
    //Printing char array without using null character
    // int i;
    // char arr[]={'H','e','l','l','o',' ','W','o','r','l','d'};
    // for (i=0;i<11;i++)
    // {
    //     printf("%c",arr[i]);
    // }

    //printing char arr with null character
    int i=0;
    char arr[]={'H','e','l','l','o',' ','W','o','r','l','d','\0'};
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }

}
