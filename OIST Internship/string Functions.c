#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20]={'j','a','v','a',' '},ch2[20];
    printf("Length of the String is : %d",strlen(ch));
    strcpy(ch2,ch);
    printf("\n%s",ch2);
    printf("\n%d",strcmp(ch,ch2));
    strcat(ch,ch2);
    printf("\n%s",ch);
    return 0;
}

