#include<stdio.h>
#include<string.h>
void main()
{   
    int p;
    char ch;
    char str[40];
    printf("Enter string : ");
    scanf("%[^\n]s",str);
    printf("Enter position where letter is to be inserted : ");
    scanf("%d",&p);
    printf("Enter letter to be inserted : ");
    scanf(" %c",&ch);                                         // the space before %c tells the compiler to ignore whitespaces(\n) from the previous input                                    
    for (int i=strlen(str);i>p-1;i--)
    {
        str[i]=str[i-1];
    }
    str[p-1]=ch;
    printf("%s",str);

}