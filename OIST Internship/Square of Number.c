#include<conio.h>
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Value ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Square of %d = %d \n",i,i*i);
    }
    return 0;
}
