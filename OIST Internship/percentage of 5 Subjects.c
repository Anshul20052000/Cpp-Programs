#include<stdio.h>
#include<conio.h>
int main()
{
    float m,p,c,b,e,per;
    printf("Enter the Marks of all the Subjects of a Student\n");
    printf("Maths \n");
    scanf("%f",&m);
    printf("Physics \n");
    scanf("%f",&p);
    printf("Chemistry \n");
    scanf("%f",&c);
    printf("Biology \n");
    scanf("%f",&b);
    printf("English \n");
    scanf("%f",&e);
    per=(((m+p+c+b+e)/500)*100);
    printf("Percentage of Student is  %f",per);
    return 0;
}
