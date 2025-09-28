// switch case (more efficient and fast than if else)
    //  we cannot pass range in switch case it is applied for single value



  // mini calculator  
    #include <stdio.h>
#include <math.h>
int main()
{
    int a, b, sum, sub, mul, div, power;
    char operator;
    printf("\nEnter two numbers\n-");
    scanf("%d%d", &a, &b);
    printf("enter operator-");
    scanf(" %c ", &operator);
    switch (operator)
    {
    case '+':
        sum = a + b;
        printf("%d", sum);
        break;
    case '-':
        sub = a - b;
        printf("%d", sub);
        break;
    case '*':
        mul = a * b;
        printf("%d", mul);
        break;
    case '/':
        if (b == 0)
            printf("cannot be divide");
        else
            printf("%d", a / b);
        break;
    case '^':
        power = pow(a, b);
        printf("%d", power);
        break;
    default:
        printf("invalid operator");
    }


// traffic light system
    char choice;

    printf("enter choice-");
    scanf("%c", &choice);
    // printf("\n R= red\nY= yellow\nG= green");
    switch (choice)
    {
    case 'R':
        printf("stop");
        break;
    case 'G':
        printf("go");
        break;
    case 'Y':
        printf("wait");
        break;
    default:
        printf("invalid input");
    }
     
// days of week
    
        int number;
        printf("enter choice-");
        scanf("%d", &number);
        switch (number)
        {
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
        default:
            printf("invalid operator");
        }
        return 0;
    }
