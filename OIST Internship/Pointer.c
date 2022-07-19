#include<conio.h>
#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("Value = %d, address = %x",a,&a);
    printf("Value of p = %x , Address of p = %x , Value of pointer to variable = %d",p,&p,*p);
    return 0;

}
