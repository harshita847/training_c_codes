#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="mom";
    int len = strlen(name);
    printf("%d",len);
    for(int i=0;i<len/2;i++)
      {
        printf("%c",name[i]);
      }
      for(int i=len-1;i<len/2;i++)
      {
        printf("%c",name[i]);
      }
  return 0;
}