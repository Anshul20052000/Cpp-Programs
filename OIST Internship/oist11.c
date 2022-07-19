
#include<conio.h>
#include<stdio.h>
int main()
{
    int p,c,m,op,np1,np2,bal=100000;
    char ch;
    printf("\t!!! Welcome to Oriental Bank !!!\n");
    xyz:
    printf("Enter your PIN : ");
    scanf("%d",&p);
    if(p<1500)
    {
        printf("Authorized User : HARSHIT SHRIVASTAVA \n");
        printf("Enter your Choice :\n");
        printf("1. Balance Enquiry \n2. Withdrawal  \n3. Mini Statement \n4. Change Password \n");
        scanf("%d",&c);
        switch(c)
        {
            case 1 : printf("Your Balance is : Rs 1,00,000 \n");
            break;
            case 2 : printf("Enter the Money to be Withdrawal : ");
            scanf("%d",&m);
            while(m>bal)
            {
                printf("The Entered Money Exceeded your Balance!\n");
                printf("Enter the valid Money to be Withdrawal Again : ");
                scanf("%d",&m);
            }
            printf("Please Collect your Cash!\n");
            bal-=m;
            printf("Your Current Balance is : %d",bal);
            break;
            case 3 : printf("Please Collect your Mini Statement!");
            break;
            case 4 : printf("Enter your OLD Password : ");
            scanf("%d",&op);
            printf("Enter your NEW Password : ");
            scanf("%d",&np1);
            printf("Re-enter your NEW Password : ");
            scanf("%d",&np2);
            while(np1!=np2)
            {
                printf("You Entered a Wrong Password \n");
                printf("Enter the NEW Password Again : ");
                scanf("%d",&np2);
            }
            printf("Your Password is Changed!");
            break;
            default : printf("You Entered a Wrong Choice!\n");
        }

    }
    else
    {
        printf("Invalid PIN\n");
    }
    printf("Do you want Another Chance[Y/N]!!!\n");
    scanf(" %c",&ch);
    if(ch=='y'||ch=='Y')
    {
        goto xyz;
    }
    printf("THANK YOU FOR USING OUR SERVICE! \n");
    return 0;
}
