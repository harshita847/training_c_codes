#include <stdio.h>
#include <stdlib.h>

// DMA  (dynamic memory allocation- memory allocated at runtime )
int main()
{
    int n;
    printf("enter size of array-");
    scanf("%d", &n);
    int *array = (int *)malloc(n * sizeof(int)); // pointer array
    printf("enter elements of array-");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("elements of array are-");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

// to print elements from negative to positive

    for (int i=0;i<n;i++)
    {  int j=0;
         for( j=0;j<n;j++){
        if(array[i]==0)
        {   array[j]=array[i];
            j++;
           // printf(" %d ",array[j]);
        }
    for (int i=0;i<n;i++){
        if(array[i]<0)
        {   array[j]=array[i];
            j++;
            //printf(" %d ",array[j]);
        }}
    
    for (int i=0;i<n;i++){
        if(array[i]>0)
        {   array[j]=array[i];
            j++;
           // printf(" %d ",array[j]);
        }
    }
    }
         printf(" %d ",array[i]);
    }
        

        
    
    return 0;
}