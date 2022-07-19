#include<conio.h>
#include<stdio.h>
void main()
{
    int a;
    for(int i=1;i<=5;i++)
    {
        a=65;
        for(int j=0;j<i;j++)
        {
        printf("%c",a);
        a+=1;
        }
        printf("\n");
    }
}
