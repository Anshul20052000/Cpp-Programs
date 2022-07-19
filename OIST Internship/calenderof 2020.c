#include<stdio.h>
#include<conio.h>
void month(int a)
{
    int c;
    c=(a-1)%7;
    if(c==0)
    {
        printf("Monday");
    }
    if(c==1)
    {
        printf("Tuesday");
    }
    if(c==2)
    {
        printf("Wednesday");
    }
    if(c==3)
    {
        printf("Thursday");
    }
    if(c==4)
    {
        printf("Friday");
    }
    if(c==5)
    {
        printf("Saturday");
    }
    if(c==6)
    {
        printf("Sunday");
    }
}
int main()
{
    int m=0,a=0;
    void month(int);
    printf("***Year 2020***\n");
    x:
    printf("Enter the Month (By Number)  ");
    scanf("%d",&m);
    printf("Enter the Date of the Month  ");
    scanf("%d",&a);
    switch(m)
    {
        case 1 : printf("### January ###\n");
        month(a+2);
        break;
        case 2 : printf("### February ###\n");
        month(a+5);
        break;
        case 3 : printf("### March ###\n");
        month(a+6);
        break;
        case 4 : printf("### April ###\n");
        month(a+9);
        break;
        case 5 : printf("### May ###\n");
        month(a+4);
        break;
        case 6 : printf("### June ###\n");
        month(a+0);
        break;
        case 7 : printf("### July ###\n");
        month(a+2);
        break;
        case 8 : printf("### August ###\n");
        month(a+5);
        break;
        case 9 : printf("### September ###\n");
        month(a+1);
        break;
        case 10 : printf("### October ###\n");
        month(a+3);
        break;
        case 11: printf("### November ###\n");
        month(a+6);
        break;
        case 12 : printf("### December ###\n");
        month(a+1);
        break;
        default : printf("You Entered a Wrong Month ");
    }
    char ch;
    printf("\nDo you want Another Chance(Y/y)!!!!!");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
