#include<stdio.h>
#include<string.h>
union student
{
    int rollno;
    char name[50];
    char mob[10];
}s1;
int main()
{
    s1.rollno = 101;
    strcpy(s1.name,"Anshul Verma");
    strcpy(s1.mob,"8305519040");
    printf("Student Roll No. : %d\n",s1.rollno);
    printf("Student Name : %s\n",s1.name);
    printf("Student Contact Number : %s\n",s1.mob);
    return 0;
}

