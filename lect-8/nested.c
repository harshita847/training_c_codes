#include<stdio.h>
int main()
/*{int i,j;
   for(i=0;i<5;i++)
   {
    for (j=0;j<5;j++)
    {
        printf(" ## ");
    }
    printf("\n");*/


   // to print  inverted right angle triangle 
   {int k,l;
   for(k=1;k<5;k++)
   {
    for (l=5;l>k;l--)
    {
        printf(" ## ");
    }
    printf("\n");
   }

// 
int a,b,c;
   for(a=0;a<5;a++)
   {
    for (b=5;b>a;b--)
    {
        printf(" ");
    }
    for(c=0;c<=a;c++)
    { 
        printf("*");
    }

    
    printf("\n");}
    return 0;
}


