#include<iostream>
#include<cstring>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;

}B2;
int main()
{
    book B3;
    book B1={100,"The Alcemist",500};
    B2.bookid=101;
    strcpy(B2.title,"The Altruist");
    B2.price=500;
    B3=B1;
    cout<<B1.bookid<<B1.title<<B1.price<<endl;
    cout<<B2.bookid<<B2.title<<B2.price<<endl;
    cout<<B3.bookid<<B3.title<<B3.price<<endl;
    return 0;
}
