#include<stdio.h>
#include<conio.h>
int main()
{
    int age,vote=0,bjp=0,congress=0;
    xyz:
    printf("Voting Process Starts!!!\n");
    for(int i=0; i<10;i++)
    {
        printf("Voter %d :\n",i+1);
        printf("Enter your Age : ");
        scanf("%d",&age);
        if(age>=18)
        {
            int a=0;
            printf("You are eligible for Voting\n");
            printf("To whom do you want to Vote :\n 1. BJP \n 2. Congress \n");
            scanf("%d",&vote);
            while(a!=-1)
            {
                if(vote==1)
                {
                    bjp++;
                    a=-1;
                }
                else if(vote==2)
                {
                    congress++;
                    a=-1;
                }
                else
                {
                    printf("Please Re-Vote :\n1. BJP \n2. Congress ");
                    scanf("%d",&vote);
                }
            }
        }
        else
        {
            printf("You are not Eligible for Voting\n");
        }
        printf("\n");
    }
    if(bjp>congress)
    {
        printf("Winner is BJP!!!");
    }
    else if(bjp==congress)
    {
        printf("DRAW Re-Voting should be Done!!!\n");
        goto xyz;
    }
    else
    {
        printf("Winner is Congress!!!");
    }
}
