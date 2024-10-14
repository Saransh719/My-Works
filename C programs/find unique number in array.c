#include<stdio.h>
#include<stdbool.h>
void main()
{
    int arr[7]={1,2,2,2,3,3,3},i,j;
    bool frepeat=false;
    for (i=0;i<=6;i++)
    {
        frepeat=false;
        for (j=i+1;j<=6;j++)
        {
            if (arr[i]==arr[j])
            {
                frepeat=true;
            }
        }
        if (frepeat==false)
        {
            printf("%d",arr[i]);
            break;
        }
    }

}