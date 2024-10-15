#include<stdio.h>
#include<string.h>
void main()
{
    char str[]={};
    //scanf("%s",str);          //DONT USE &   //this method is not preffered as scanf does not read after space
    //gets(str);
    scanf("%[^\n]s",str);      //way to use scanf to get full input after space
    
    printf("%s \n",str);      //string.h is required for %s
    puts(str);             //only used to print string, automatically gives \n
    //puts("Hello everyone");
}