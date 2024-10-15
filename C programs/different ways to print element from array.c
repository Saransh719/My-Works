#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5};
    printf("%d\n",arr[0]);    //arr[i]
    printf("%d\n",0[arr]);    //i[arr]
    printf("%d\n",*(0+arr));  //*(i+arr)
    printf("%d\n",*(arr+0));  //*(arr+i) (Addition is commutative )
}