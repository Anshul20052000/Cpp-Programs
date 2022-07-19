#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    int a;
    for(int i=1;i<=10;i++)
    {
        a=1;
        for(int j=1;j<=i;j++)
        {
            printf(" %d",a);
            a*=2;
        }
        printf("\n");
    }
}
