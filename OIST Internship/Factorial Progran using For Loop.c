#include<stdio.h>
#include<conio.h>
int  main()
{
    int a,fact=1;
    printf("Enter the Number ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        printf("%d Fact = %d \n",i,fact);
        fact*=i;
    }
    printf("Factorial = %d",fact);
    return 0;
}
