#include<stdio.h>
#include<string.h>
void main()
{
    // char str[]="Hello World";
    // char* ptr=str;             //ptr points to str[0] as seen in arrays
    // int i=0;
    // while (*ptr!='\0')
    // {
    //     printf("%c",*ptr);
    //     i++;
    //     ptr++;                //since character only takes one byte and addresses are adjacent to each other in array, thus ptr++ now points to str[1]
    // }



    //Initialising using pointers
    char* ptr="Hello World";     //one downside is that this string is read only for individual characters
    printf("%s",ptr);            //not using *, if using *, only first letter printed
}




//in normal initialisation we can change individual characters but not entire string
//in pointer intialisation we can change entire string but not individual characters    i.e. pointer will simply point to the new string written
