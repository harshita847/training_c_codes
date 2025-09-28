#include<stdio.h>
int main()
{  int arr[7]={2,4,5,6,7,6,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int windowsum=0;
    for(int i=0;i<=3;i++)
    {
       windowsum=windowsum+arr[i];
         }
         int maxsum=0;

         for(int j=k;j<n;j++)
         { if(windowsum>maxsum)
           
            maxsum= windowsum;


         }
         printf("%d",maxsum);


return 0;
}


// to find whether 