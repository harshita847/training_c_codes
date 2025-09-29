// sliding window (subarray)

#include <stdio.h>
int main()
{
    /* int a[5]={20,10,30,40,60};
     int maxsum=0;
     int wsum=0;
     int k=2;
     for(int i=0;i<k;i++)
     {
         wsum=wsum+a[i];
     }
     maxsum=wsum;
     for(int i=k;i<5;i++)
     {  wsum+=a[i]-a[i-k];
        if(wsum>maxsum)
        maxsum=wsum;

     }
     printf("%d",maxsum);



  

    int a[8] = {12, -1, -7, 8, -15, 30, 16, 28};

    int k = 3;
    for (int i = 0; i < 8 - k; i++)
    {
        int found = 0;
        for (int j = i; j < i +k; j++)
        {
            if (a[j] < 0){
                printf("%d", a[j]);
            found = 1;
            break;
        }
        }
    }
}*/


int a[8] = {12, -1, -7, 8, -15, 30, 16, 28};

    int k = 2;
    int max=a[0];
    for (int i = 0; i < 8 - k; i++)
    {
        //int found = 0;
        for (int j = i; j < i +k; j++)
        {
            if (a[j]>max){
                printf("%d", a[j]);
           // found = 1;
            break;
        }
        }
    }
}


