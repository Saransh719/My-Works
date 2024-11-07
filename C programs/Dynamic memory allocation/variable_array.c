#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;
    printf("No of integers to input : ");
    scanf("%d",&n);

    int* ptr=(int*)malloc(n*sizeof(int));
    int* p=ptr;       //pointing to first element (so that after we do ptr++, we can still print the array, this is kind of a backup)
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&(*ptr));    //ptr ki value main store karna hai
        ptr++;                  //ptr will point to next element
    }

    int* another_backup=p;
    for (int i=1;i<=n;i++)
    {
        printf("%d",*p);
        p++;
    }
}