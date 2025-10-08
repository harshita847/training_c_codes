#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "hello";
    int len = strlen(s);
    printf("%s\n",s);
    int count_vowel,count_con, no = 0,noo=0;
    int i, j;
    for (i = 0; i < len; i++)
    {
        count_vowel = 0;
        count_con=0;
        // for (j =0; j <i; j++)

        if (s[i] == 'a' || s[i] == 'e' | s[i] == 'i' | s[i] == 'o' | s[i] == 'u')
        {
            count_vowel++;
        }
       else if (s[i]!= 'a' || s[i]!= 'e' | s[i]!= 'i' | s[i]!= 'o' | s[i]!= 'u')
        {  count_con++;}
        noo=count_vowel+noo;
        no = count_con + no;
    }

    if (no&&noo!= 0)
    {

        printf("vowel=%d\n", noo);
        printf("consonant=%d", no);
    }

    return 0;
}
