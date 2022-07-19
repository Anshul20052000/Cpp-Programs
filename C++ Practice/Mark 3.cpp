#include<iostream>
#include<conio.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;

};
int main()
{
    book B1={100,"The theory ",709.5};
    book B2;
    B2.bookid=101;
    strcpy(B2.title,"The Theory of");
    B2.price=785.39;
    book B3;
    B3=B2;
    return 0;

}
