#include<stdio.h>
#include<string.h>

    int main(){
    char name[]="mom";
    int ln = strlen(name);
    int istrue=1;
    for(int i=0;i<ln/2;i++)
    {
        if(name[i]!=name[ln-i-1])
        istrue =0;
        break;
    }
    if(istrue)
    {
        printf("palindome");
       /* for(int i=0;i<=ln;i++){
        if(name[i]!=name[ln-i-1])
        printf("%c",name[i]);}*/

    }
    else

    printf("not a palindrome");
    return 0;
}