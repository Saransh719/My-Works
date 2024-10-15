#include<stdio.h>
void main()
{
    char str[40];
    scanf("%[^\n]s",str);
    //finding size
    int size=0,i=0;
    while (str[i]!='\0')
    {
        i++;
        size++;
    }
    char temp[size];
    for (i=0;i<size;i++)
    {
        temp[i]=str[size-i-1];
    }
    puts(temp);

}