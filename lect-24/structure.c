#include<stdio.h>
#include<string.h>
struct address
{
    int pincode;
};
typedef struct student
{
    char name[50];
    int rollno;
    int age;
    struct address s2;
}st;
int main()
{

    st s1;
    strcpy(s1.name,"harshita");
    s1.age= 18;
    s1.s2.pincode=482001;
    printf("%d\n",s1.s2.pincode);
    printf("%s\n",s1.name);
     printf("%d",s1.age);


}