#include <stdio.h>
#include <string.h>
int main()
 { 
   // to print first non duplicate character from string
      char name[]="hello";
      int ln=strlen(name);
        int freq[256] = {0};
        for (int i = 0; i < ln; i++)
        {
            freq[name[i]]++;
        }
        for (int i = 0; i < ln; i++)
        {
            if (freq[name[i]] == 1)
            {
                printf("%c", name[i]);
                break;
            }
        }


    
//two compare two string and print unique character for both string
    char name1[] = "pawani";
    char name2[] = "harshita";
    int lnp = strlen(name1);
    int lnh = strlen(name2);
    for (int i = 0; i < lnp; i++)
    {
        for (int j = 0; j < lnh; j++)
        {
            if (name1[i] == name2[j])
            {
                printf("%c\n", name1[i]);
               // printf("%c\n", name2[j]);
                break;
            }
        }
    }
    return 0;
}
