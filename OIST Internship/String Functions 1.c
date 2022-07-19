#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the String : ");
    gets(str);
    printf("String is : %s\n",str);
    printf("String  Length is : %d\n",strlen(str));
    printf("Lowercase String is : %s\n",strlwr(str));
    printf("Uppercase String is : %s\n",strupr(str));
    printf("Reverse String is : %s\n",strrev(str));
    return 0;
}
