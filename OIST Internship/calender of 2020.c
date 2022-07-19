#include<stdio.h>
#include<conio.h>
int main()
{
    int m,d;
    printf("## Year 2020 ## \n");
    printf("Enter the Month and Date  \n");
    scanf("%d %d",&m,&d);
    switch(m)
    {
        case 1 : printf("### January ###\n");
        d+=2;
        break;
        case 2 : printf("### February ###\n");
        d+=5;
        break;
        case 3 : printf("### March ###\n");
        d+=6;
        break;
        case 4 : printf("### April ###\n");
        d+=9;
        break;
        case 5 : printf("### May ###\n");
        d+=4;
        break;
        case 6 : printf("### June ###\n");
        d+=0;
        break;
        case 7 : printf("### July ###\n");
        d+=2;
        break;
        case 8 : printf("### August ###\n");
        d+=5;
        break;
        case 9 : printf("### September ###\n");
        d+=1;
        break;
        case 10 : printf("### October ###\n");
        d+=3;
        break;
        case 11: printf("### November ###\n");
        d+=6;
        break;
        case 12 : printf("### December ###\n");
        d+=1;
        break;
        default : printf("You Entered a Wrong Month ");
    }
    d=d%7;
    switch(d)
    {
        case 0 : printf("Sunday");
        break;
        case 1 : printf("Monday");
        break;
        case 2 : printf("Tuesday");
        break;
        case 3 : printf("Wednesday");
        break;
        case 4 : printf("Thursday");
        break;
        case 5 : printf("Friday");
        break;
        case 6 : printf("Saturday");
        break;
    }
    return 0;
}
