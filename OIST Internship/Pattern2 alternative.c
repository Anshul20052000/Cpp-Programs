#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    int a;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            a=pow(2,j-1);
            printf(" %d",a);
        }
        printf("\n");
    }
}
