#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b ;
    printf("Enter the value of A and B ");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After Swapping A = %d and B = %d ",a,b);
    return 0;

}
