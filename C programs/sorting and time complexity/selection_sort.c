//algorithm
//find the minimum element in the array and swap it with the first element, then traverse the REST of array and swap it with the 2nd element, continue
//we need to traverse the array n-1 times as after that, last 2 numbers would have been swapped if needed
#include<stdio.h>

void swap(int* x,int* y)
{
    int temp=0;
    temp=*y;
    *y=*x;
    *x=temp;
}


void main()
{
    int arr[]={5,4,3,2,1};
    int n=5;
    int min_index;
    for (int i=0;i<n-1;i++)
    {
        int min=__INT_MAX__;
        for (int j=i;j<n;j++)
        {
            if (min>arr[j])
            {
                min=arr[j];
                min_index=j;
            }
        }
        //swap the min and first element of unsorted part(from where i is starting)
        swap(&arr[i],&arr[min_index]);
    }
    
    //printing the array
    for (int i=0;i<n;i++) printf("%d | ",arr[i]);

}