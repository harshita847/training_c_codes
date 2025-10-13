#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter size of array-");
    scanf("%d", &n);
    int *array = (int *)calloc(n , sizeof(int)); // default value=0 {continuous memory location}
    printf("enter elements of array-");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
return 0;
}

// all these function are use to allocate dynamic memory to array


// malloc- to allocate dynamic memory to array
// realloc- to rellocate the memory to already existed array 
// calloc - same as malloc but(syntax different)
// free(array name)- it will unblock all the unused memory inside array