// to print number from 1 to 10 using loops

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i >= 10; i++)
    {
        printf("%d", i);
    }

    // to print even number from 1 to n

    {
        int a, j;
        printf("enter value of a-");
        scanf("%d", &a);
        for (j = 0; j <= a; j = j + 2)
        {
            printf("%d", j);
        }

        // to print odd numbers from 1-n

        int b, k;
        printf("enter value of b-");
        scanf("%d", &b);
        for (k = 1; k <= a; k = k + 2)
        {
            printf("%d\n", k);
        }

        // to find sum of number from 1 to n

        int x, count, sum = 0;
        printf("enter value of x-");
        scanf("%d", &x);
        for (count = 1; count <= x; count++)
        {
            sum = sum + count;
        }
        printf("%d", sum);
    }



// to print table of 5
int number = 5, m;
for (m = 1; m <= 10; m++)
{
    printf("%d*%d=%d", number, m, number * m);
}
return 0;



// while loop

