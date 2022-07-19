#include<conio.h>
#include<stdio.h>
int main()
{
    int a=50;
    int *p;
    int **p2;
    p=&a;
    p2=&p;
    printf("Value of Number : %d\n",a);
    printf("Value of p : %x\n",p);
    printf("Value of p2 : %x\n",p2);
    printf("Address of Number : %x\n",&a);
    printf("Address of p Variable : %x\n",p);
    printf("Value of *p : %d\n",*p);
    printf("Address of P Variable : %x\n",p2);
    printf("Value of **p Variable : %d\n",**p2);
    return 0;
}
