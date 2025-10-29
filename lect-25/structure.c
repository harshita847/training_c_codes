#include <stdio.h>
#include <string.h>
// struct address
// {
//     int pincode;
// };
typedef struct student
{
    char name[50];
    int rollno;
    //float marks;
    // struct address s2;
} st;
int main()
{

    st s1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter -\n");
        scanf(" %s", s1[i].name);
        //printf("enter your rollno-\n");
        scanf(" %d", s1[i].rollno);
       // printf("enter your marks-\n");
       // scanf(" %f", s1[i].marks);
    }
    return 0;
}