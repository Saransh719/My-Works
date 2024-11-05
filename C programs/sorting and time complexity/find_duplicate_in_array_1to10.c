#include<stdio.h>

void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,9,10};
    //M1(not efficient)  O(n^2) time complexity
    for (int i=0;i<11;i++)
    {
        for (int j=i+1;j<11;j++)
        {
            if (arr[i]==arr[j])
            {
                printf("%d is repeated\n",arr[i]);
                break;
            }

        }
    }

    //M2(time efficient but not space efficient)    O(n) time complexity
    int brr[10]={0};
    for (int i=0;i<11;i++)
    {
        if (brr[(arr[i]-1)]==1)
        {
            printf("%d is repeated\n",arr[i]);
            break;
        }
        else
        {
            brr[arr[i]-1]=1;
        }
    }

    //M3(time and space effecient)     O(n) time complexity
    int extra_sum=0;
    for (int i=0;i<11;i++) extra_sum+=arr[i];
    int actual_sum=10*(10+1)/2;
    printf("%d is repeated",extra_sum-actual_sum);
}