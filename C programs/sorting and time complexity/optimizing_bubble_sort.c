//check if array is sorted before iterating(called a pass)
#include<stdio.h>
#include<stdbool.h>
void swap(int* x,int* y)
{
    int temp=0;
    temp=*y;
    *y=*x;
    *x=temp;
}

void main()
{
    int arr[]={1,4,3,2,5};
    int n=5;
    for (int i=0;i<n-1;i++)     
    {
        bool flag=true;              //false means array is not sorted yet,true means sorted, we are setting flag to true in starting of each pass
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=false;
            }
        }
        printf("%d pass just finished\n",i+1);
        if (flag==true) break;        //reducing number of operations
    }
    //printing the array
    for (int i=0;i<n;i++) printf("%d | ",arr[i]);    
}