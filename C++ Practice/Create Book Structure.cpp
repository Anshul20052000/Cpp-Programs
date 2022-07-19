#include<iostream>
using namespace std;
struct book
{
    char bookName[50];
    char authorName[50];
    float bookPrice;
};
int main()
{
    book b1;
    cout<<"Enter the Book Name : ";
    gets(b1.bookName);
    cout<<"Enter the Author of Book : ";
    gets(b1.authorName);
    cout<<"Enter the Book Price : ";
    cin>>b1.bookPrice;
    cout<<"\nThe Book Name is : "<<b1.bookName<<endl;
    cout<<"The Author of Book is : "<<b1.authorName<<endl;
    cout<<"The Book Price is : "<<b1.bookPrice<<endl;
    return 0;
}
