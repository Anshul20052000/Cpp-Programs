#include<stdio.h>
#include<conio.h>
void fun();
int main()
{
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    return 0;
}
void fun()
{
    int x=10;
    static int y=10;
    x=x+1;
    y=y+1;
    printf("%d , %d\n",x,y);
}
