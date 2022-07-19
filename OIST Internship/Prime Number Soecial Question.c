#include<conio.h>
#include<stdio.h>
int main()
{
    int n,fact,z=0,ar[2000];
    printf("Enter the Number : ");
    scanf("%d",&n);
    printf("The Prime Numbers are : ");
    for(int i=1;i<=n;i++)
    {
        fact=0;
        for(int j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            printf(" %d ",i);
            ar[z]=i;
            z++;
        }
    }
    printf("\nValues inside the Array : ");
    for(int i=0;i<z;i++)
    {
        printf(" %d ",ar[i]);
    }
    int temp=ar[0],count=0;
    for(int i=1;i<z;i++)
    {
        temp+=ar[i];
        for(int j=0;j<z;j++)
        {
            if(temp==ar[j])
            {
                count++;
            }
        }

    }
    printf("\nCount : %d",count);
    return 0;
}
