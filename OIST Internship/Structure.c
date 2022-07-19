#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
};
int main()
{
    struct employee e1;
    e1.id = 101;
    strcpy(e1.name,"Anshul Verma");
    printf("Employee Id : %d\n",e1.id);
    printf("Employee Name : %s\n",e1.name);
    return 0;
}
