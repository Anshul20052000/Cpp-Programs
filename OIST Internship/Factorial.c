#include<conio.h>
#include<stdio.h>
int main()
{
    int a,fact=1;
    printf("Enter the Value ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fact*=i;
        printf("%d \n",fact);
    }
    printf("Factorial is = %d",fact);
    return 0;
}
