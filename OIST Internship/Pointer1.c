#include<conio.h>
#include<conio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("Value = %d, Address = %d\n",a,&a);
    printf("Value of p = %d , Address of p = %d\n",p,&p);
    printf("Value = %x, Address = %x\n",a,&a);
    printf("Value of p = %x , Address of p = %x\n",p,&p);
    printf("Value = %u, Address = %u\n",a,&a);
    printf("Value of p = %u , Address of p = %u\n",p,&p);
    printf("Value = %p, Address = %p\n",a,&a);
    printf("Value of p = %p , Address of p = %p\n",p,&p);
    printf("Value = %X, Address = %X\n",a,&a);
    printf("Value of p = %X , Address of p = %X\n",p,&p);
    return 0;

}
