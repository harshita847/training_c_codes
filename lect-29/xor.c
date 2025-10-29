#include<stdio.h>
int main()
{
   int a[5]={2,3,3,2,4};
   int i;
   int b=0;
   for( i=0;i<5;i++){
     b=b^a[i];}
    // printf("%d",a[i]);

printf("%d",b);
printf("\n");


// swap numbers using xor

int num1=5;
int num2=3;
printf("num1=%d,num2=%d\n",num1,num2);
num1=num1^num2;
num2=num1^num2;
num1=num1^num2;
printf("after swapping-\n");
printf("%d,%d",num1,num2);


// to left shift and right shift

int x=5;
int ans=x<<1;  // left shift
printf("%d",ans);
   }
   

