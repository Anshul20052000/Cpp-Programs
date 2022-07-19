#include<conio.h>
#include<stdio.h>
int main()
{
    int a=0,sum=0;
    do
    {
        printf("%d * 5 = %d \n",a,a*5);
        sum+=a;
        a++;

    }
    while(a<=10);
    printf("Sum = %d",sum);
    return 0;
}
