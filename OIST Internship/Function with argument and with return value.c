#include<conio.h>
#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b;
    printf("Sum Calculate ");
    printf("\nEnter the Two Numbers  : \n");
    scanf("%d%d",&a,&b);
    printf("Sum : %d",sum(a,b));
}
int sum(int a,int b)
{
    return (a+b);
}
