#include<stdio.h>
//time complexity of worst case scenario is O(n^2)
void swap(int* x,int* y)
{
    int temp=0;
    temp=*y;
    *y=*x;
    *x=temp;
}

//note that each iteration of i is called a pass
void main()
{
    //note that while using bubble sort, the greatest element is moved to end in the first iteration, so no need to compare it again, just sort
    //rest of the array, therefore, run loop for (n-1 times for i) and for (n-i-1 times for j) (as first n-1 needs to be sorted then n-2 then n-3 ,etc)
    int arr[]={5,4,3,2,1};
    int n=5;
    for (int i=0;i<n-1;i++)     //as loop needs to run n-1 times as discussed above(and also to stop, OutOfIndex error)
    {
        for (int j=0;j<n-i-1;j++)    //first iteration till n-2, thus full array covered (n-1th term is covered by j+1)
        {
            if (arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
            
        }
    }
    
    //printing the array
    for (int i=0;i<n;i++) printf("%d | ",arr[i]);
}
