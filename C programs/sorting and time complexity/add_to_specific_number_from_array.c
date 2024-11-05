//given an array sorted in ascending order, find 2 elements which add up to a specific target numebr
#include<stdio.h>
#include<stdbool.h>
void main()
{
    int target=8;
    int arr[]={1,2,3,4,5,8,9,10};
    int n=8;
    //M1(not efficient)   O(n^2)
    bool flag=false;
    for (int i=0;i<n-1;i++)    //i<n-1 as otherwise out of bound error in j for last iteration
    {
        for (int j=i+1;j<n;j++)
        if (arr[i]+arr[j]==target)
        {
            printf("Elements are %d and %d \n",arr[i],arr[j]);
            flag=true;
        }
    }  
    if (flag==false) printf("No such elements exist\n");

    //M2(DOUBLE POINTER APPROACH)    O(n)
    //Here, pointer does to refer to memory location put instead is just a variable refereing an index of the array
    //algorithm:
    //let i=0th index and j=last index
    // now check if i+j=target, if yes, nice
    // if i+j>target, that means sum is greater, we need to reduce, and since the array is sorted, j--
    //if i+j<target, i++ for the same reason
    int i=0,j=n-1;
    while (i<j)
    {
        if (arr[i]+arr[j]==target)
        {
            printf("Elements are %d and %d",arr[i],arr[j]);
            break;
        }
        else if (arr[i]+arr[j]>target) j--;
        else if (arr[i]+arr[j]<target) i++;
    }
    if (i==j) printf("No such elements exist");
}