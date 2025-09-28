#include <stdio.h>
int main()
{
    int array[5] = {1,2,3,4,5};

    int n = sizeof(array) / sizeof(int);
   /* for (int i = 0; i < n ; i++)
    {
        for (j = 0; j < n  - i; j++)
        {
            if (array[j] >array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        printf("%d\n", array[i]);

       
    }
     return 0;*/
     printf("%d",n);
     int start=0;
     int end=n-1;
    int target= 23;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(array[mid]==target)
        {
            printf("%d",mid);
        }
        else if(array[mid]<target)
        {
            start=mid+1;
        
        } else if(array[mid]>target){
        
           end = mid-1;}



           printf("%d",array[mid]);
    }
    return 0;



    }


