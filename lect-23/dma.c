#include <stdio.h>
#include <stdlib.h>

// DMA  (dynamic memory allocation- memory allocated at runtime )
int main()
{
    int n;
    printf("enter size of array-");
    scanf("%d", &n);
    int *array = (int *)malloc(n * sizeof(int));//default value=garbage value
   // int *array = (int *)malloc(n * sizeof(int)); // default value=0 {continuous memory location}
    printf("enter elements of array-");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }


    //relloc-to increase or decrease size in already exsisted array
     int newsize;
     printf("enter the new size-");
     scanf("%d",&newsize);
    array = (int *)realloc(array, newsize * sizeof(int));
    printf("enter elements of array-");
    for (int i = 0; i < newsize; i++)
    {
        scanf("%d", &array[i]);
    }
return 0;
}

