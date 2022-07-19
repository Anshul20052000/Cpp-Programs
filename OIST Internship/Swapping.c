#include<stdio.h>
#include<conio.h>
int main()
{
    int c,b;
    printf("Enter A and B");
    scanf("%d",&c);
    scanf("%d",&b);
    c=c+b;
    b=c-b;
    c=c-b;
    printf("After Swapping A = %d and B = %d",c,b);
    return 0;
}
