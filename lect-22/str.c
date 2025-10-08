#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "hello";
    int len = strlen(s);
    int count, no = 0;
    int i, j;
    for (i = 0; i < len; i++)
    {
        count = 0;
        // for (j =0; j <i; j++)

        if (s[i] == 'a' || s[i] == 'e' | s[i] == 'i' | s[i] == 'o' | s[i] == 'u')
        {
            count++;
        }

        no = count + no;
    }

    if (no != 0)
    {

        printf("%d", no);
    }

    return 0;
}
