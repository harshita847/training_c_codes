#include <stdio.h>
// recursion- when a function call itself again and again
// print number from 1 to 5
void sum(int a)
{
    if (a == 0)
    {
        return;
    }
    sum(a - 1);
    printf("%d\n", a);
}
void num(int a)
{
    if (a == 0)
    {
        return;
    }
    printf("%d\n", a);
    num(a - 1);
}
// to print sum from 1to 5 number
int sum_num(int a)
{
    if (a == 0)
    {
        return 0;
    }
    return a + sum_num(a - 1);
}
// to find factorial of a number
int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    return a * factorial(a - 1);
}
// to calculate power
int power(int a,int b)
{
    if ( b == 0)
    {
        return 1;
    }
    return a * power(a,b-1);
}

int main()
{

    sum(5);
    printf("reverse order-");
    num(5);
    printf("\n");
    printf("sum of numbers from 1 to 5- is\n ");
    int data = sum_num(5);
    printf("%d\n", data);
    printf("factorial of number is\n ");
    int fact =factorial(5);
    printf("%d\n", fact);
    printf("power of number is\n ");
     int pow =power(2,3);
    printf("%d\n", pow);
    return 0;
}
