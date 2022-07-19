#include<conio.h>
#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("Enter the Number ");
    scanf("%d",&n);
    while(n!=0)
    {
        rev*=10;
        rem=n%10;
        rev+=rem;
        n/=10;
    }
    printf("The Reverse Number is %d",rev);
}
