// ternary operator

#include <stdio.h>
int main()
{
    int a = 60;
    a > 50 ? printf("true") : printf("false");

    // to find greater of two number
    int c = 20, b = 30;
    if (c > b)
        printf("%d is greater", c);
    else
        printf("%d is greater", b);

    // area of circle
    int radius;
    float area;
    printf(" enter value of radius-");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("%.1f", area);

    // increment and decrement operator
    int h = 5;
    int y = 3;
    int sum = h++ + ++y + --y + y-- + ++h;
    printf("%d", sum);

    // mini calculator

    int A, B, choice, sum, sub, mul, div; // max a=90 & marks = 80
    printf("\nenter value of a,b-");
    scanf("%d%d", &A, &B);
    printf("%d,%d", A, B);
    printf("enter choice-");
    scanf("%d", &choice);

    if (choice == 1)
    {
        sum = A + B;
        printf("%d", sum);
    }
    else if (choice == 2)
    {
        sub = A - B;
        printf("%d", sub);
    }
    else if (choice == 3)
    {
        mul = A * B;
        printf("%d", mul);
    }
    else if (choice == 4)
    {
        div = A / B;
        printf("%d", div);
    }
    else
    {
        printf("invalid operator");
    }


// grading system(report card)

int c = 76;
int m = 78;

if (c> 75 && m > 75)
{
    printf("A");
}
else if (c > 75 && m > 65 && m < 75)
{
    printf("B");
}
else if (c> 75 && m < 65 && m > 50)
{
    printf("C");
}
else if (c > 75 && m < 50 && m > 33)
    printf("D");


else
{
    printf("invalid input");}

return 0;
}
