#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    int a=3;
    char pin2[20]="Anshul@2000May",pin[20];
    printf("Enter your PIN : ");
    gets(pin);
    for(int i=0;i<3;i++)
    {
        if(strcmp(pin,pin2)==0)
        {
            printf("You are Authorized User!\n");
            printf("....Welcome To State Bank of India!!!...\n");
            break;
        }
        else
        {
            printf("You are not an Authorized User!!!...[ %d Chances Left]\n",a--);
            printf("Enter your PIN Again : ");
            gets(pin);
            if(strcmp(pin,pin2)==0 && a==0)
            {
                printf("You are Authorized User!\n");
                printf("....Welcome To State Bank of India!!!...\n");
                break;
            }
        }
    }
    return 0;
}
