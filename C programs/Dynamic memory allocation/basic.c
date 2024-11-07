// void main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];     
// }
//though the above code WILL work, but it is not recommended as the compiler can sometimes allocate less memory during compile time than required during runtime which may lead to unwanted exceptions
//this is why we need dynamic memory allocation

//Stack segment is used in these kind of code
//Stack segment is used to store all local variables and is used for passing arguments to the functions along with the return address of the instruction which is to be executed after the function call is over.

#include<stdio.h>
#include<stdlib.h>
void main(){
    //we use heap segment 
    //heap segment of memory is free memory available to any program
    //it is a large memory space usually where dynamic memory allocation takes place
    
    //OPERATIONS (usually used using pointers)
    //malloc and calloc are used for allocation
    //realloc is used for reallocation
    //free is used to deallocate memory

    //MALLOC
    int* ptr1=(int*)malloc(100*sizeof(int));     //100 integers can be stored in the memory block created to which ptr is pointing
    char* ptr2=(char*)malloc(100*sizeof(char));

    //CALLOC
    int* ptr3=(int*)calloc(100,sizeof(int));    //same as malloc, just that calloc has default value 0 for all elements and malloc has garbage value

    //FREE
    //memory stores in heaps is not removed unless specified, thus, if not managed properly, memory leaks can happen
    free(ptr1);
    //after this, memory is deallocated but pointer is still pointing to a location that now does not exist, thus, point it to NULL which is 0
    //note that ptr must still be pointing to the first address of the memory, otherwise error
    ptr1=NULL;
    printf("%p",ptr1);

    //REALLOCATION
    realloc(ptr3,10*sizeof(int));     //the data stored remains intact, only the allocated memory is changed
    //if the required memory is not present in continuation to previous pointer, location of that can change and all elements are transferred to new address
}