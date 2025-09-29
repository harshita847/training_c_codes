// to study pointer nd its uses

#include<stdio.h>
int sum(int *a,int *b)
{int a=30;
    int b=56;
    int sum=*a+*b;
    return sum;
}
int main()
{
  /*int x=5;
  int *a=&x;
  printf("%d\n",x);
  printf("%d\n",&x);
  printf("%d\n",a);
  printf("%d\n",*a);*/


  int a=10;
int b=20;
int c= sum(&a,&b);
printf("%d",c);
return 0;
}
