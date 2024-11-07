#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    char cwd[PATH_MAX];
    getcwd(cwd,200);
    printf("%s \n",cwd);
    FILE* ptr;
    ptr=fopen(".\\C programs\\file.txt","r");
    char str1[100];
    while (fgets(str1,100,ptr)!=NULL) 
    {
        printf("%s",str1);
    }
    fclose(ptr);

    //creating
    FILE* ptr2;
    ptr2=fopen(".\\C programs\\new_file.txt","w");
    char str2[]="Adding this to file";
    fputs(str2,ptr2);
    return 0;
}