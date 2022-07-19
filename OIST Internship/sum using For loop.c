#include<stdio.h>
#include<conio.h>
int  main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
        sum+=i;
    }
    printf("Sum = %d",sum);
    return 0;
}
