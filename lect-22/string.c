#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "hello";
    int len = strlen(s);
    int count;
    int i, j;
    for (i = 0; i < len; i++)
    {
        count = 0;
        for (j =0; j <i; j++)
        {
            if (s[i] == s[j])
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            printf("%c", s[j]);
        }
    }
    return 0;
}
