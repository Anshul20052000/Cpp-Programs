#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    char ch2[20];
    printf("Enter the 1st String\n");
    gets(ch);
    printf("\nEnter the 2nd String\n");
    gets(ch2);
    printf("\n%s\n",ch);
    printf("%s\n\n",ch2);
    if(strcmp(ch,ch2)==0)
    {
        printf("Hello!");
    }
    else
    {
        printf("Bye!");
    }
    return 0;
}
