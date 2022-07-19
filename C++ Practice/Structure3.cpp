#include<iostream>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;

};
Book input()
{
    Book b;
    cout<<"Enter the Bookid , Title and Price  " <<endl;
    cin>>b.bookid>>b.title>>b.price;
    return(b);

}
void display(Book b)
{
    cout<<"The Bookid is "<<b.bookid<<" Title is "<<b.title<<" and Price is "<<b.price;


}

int main()
{
    Book input();
    void display(Book);
    Book b1;
    b1=input();
    display(b1);
    return 0;
}
