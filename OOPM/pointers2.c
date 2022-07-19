#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],*p;
    for(int i=0;i<5;i++)
    {
        a[i] = i+1;
    }
    p = a;
    printf("*(a+0) = %d \n",*a);
    printf("*(a+1) = %d \n",*(a+1));
    printf("*(a+2) = %d \n",*(a+2));
    printf("*(a+3) = %d \n",*(a+3));
    printf("*(a+4) = %d \n",*(a+4));
    printf("*p = %d \n",*p);
    getch();
}
