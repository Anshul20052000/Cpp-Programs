#include<stdio.h>
#include<conio.h>
int main()
{
    int a,c;
    printf("Enter the Date of Month\n");
    scanf("%d",&a);
    c=a%7;
    if(c==0)
    {
        printf("Sunday");
    }
    if(c==1)
    {
        printf("Monday");
    }
    if(c==2)
    {
        printf("Tuesday");
    }
    if(c==3)
    {
        printf("Wednesday");
    }
    if(c==4)
    {
        printf("Thursday");
    }
    if(c==5)
    {
        printf("Friday");
    }
    if(c==6)
    {
        printf("Saturday");
    }
    return 0;

}
