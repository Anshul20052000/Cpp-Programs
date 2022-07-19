#include<conio.h>
#include<stdio.h>
void sum(int a,int b);
int main()
{
    int a,b;
    printf("Sum Calculate ");
    printf("\nEnter the Two Numbers  : \n");
    scanf("%d%d",&a,&b);
    sum(a,b);
}
void sum(int a,int b)
{
    printf("Sum : %d",a+b);
}
