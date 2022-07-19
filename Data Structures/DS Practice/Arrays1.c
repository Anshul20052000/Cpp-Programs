#include<conio.h>
#include<stdio.h>
void main()
{
    int a[5],*q = a;
    printf("Enter Elements in the Array!...\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&i[q]);// q+i  i+a  i+q  a+i  &i[a]  &i[q]
    }
    printf("Array is : \n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(q+i)); // *(q+i)  *(a+i)  i[a]  i[q]
    }
}
