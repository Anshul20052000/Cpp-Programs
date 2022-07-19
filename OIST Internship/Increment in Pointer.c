#include<conio.h>
#include<stdio.h>
int main()
{
    long a=10;
    long *p;
    p=&a;
    printf("Address 1 : %d\n",p);
    p=p+1;
    printf("Address 2 : %d\n",p);
}

