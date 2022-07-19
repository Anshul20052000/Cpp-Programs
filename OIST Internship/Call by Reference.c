#include<conio.h>
#include<conio.h>
void change(int *n)
{
    printf("\nBefore Value = %d",*n);
    *n=*n+100;
    printf("\nAfter Value = %d",*n);
}
void change(int *n);
int main()
{
    int a;
    printf("Enter the Value of A = ");
    scanf("%d",&a);
    printf("\nValue before Function Call = %d",a);
    change(&a);
    printf("\nValue after Function Call = %d",a);
    return 0;
}
