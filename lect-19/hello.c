#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {11, 3, 12}, {2, 3, 4}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || i == 2)
            {
                printf("%d ", a[i][j]);
            }
            else if (j == 1)
            {
                printf("%d  ", a[i][j]);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

