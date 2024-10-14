#include<stdio.h>
void fun(int a[])    //no need to give array size
{
    a[0]=10;
}
void main()
{
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);                  //do not give brackets here
    printf("%d\n",arr[0]);      //from this code we can see that array is PASSED BY REFERENCE and not value
}