//int swap two numbers using pointer

#include<stdio.h>
int swap(int *a,int *b) 
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("%d\n%d",*a,*b);
};
int main()
{  int a=10;
    int b=20;
    int c= swap(&a,&b);}
    //printf("%d",c);



// swap numbers without using third variable

int swap(int a,int b) {
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
};
int main()
{  int a=10;
    int b=20;
     swap(a,b);
    //printf("%d",c);
    return 0;


}
// swap two number with only two variable with the help of pointer

int swap(int *a,int *b) {
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("%d\n%d",*a,*b);
};
int main()
{  int a=10;
    int b=20;
     swap(&a,&b);
    //printf("%d",c);
    return 0;


}
//to print an array using pointer

int main()
{
int  a[5]={2,3,4,51,10};
int *p=a;
for(int i=0;i<5;i++)
{
    printf("%d\n",*(p+i));
}
return 0;


}

// to print reverse of an array using pointer
int main()
{
int  a[5]={2,3,4,51,10};
int *p=a;
for(int i=4;i>=0;i--)
{
    printf("%d\n",*(p+i));
}


}
// to print 2 dimensional array
int main()
{
   int a[2][2]={{20,30},{1,2}};
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    printf(" %d ",a[i][j]);
    printf("\n");
   }
 
}

 int main()
{
   int a[2][2]={{20,30},{1,2}};
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    printf(" %d ",a[i][j]);
    printf("\n");
   }
 return 0;
}
