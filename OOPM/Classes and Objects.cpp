#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class book
{
private:
    int pages;
    string title,author;
    float price;
public:
    void getdata();
    void putdata();
};
void book::getdata()
{
    cout<<"Enter the Title of the Book : ";
    getline(cin,title);
    cout<<"Enter the Author of the Book : ";
    getline(cin,author);
    cout<<"Enter the Price of the Book : ";
    cin>>price;
    cout<<"Enter the Number of Pages in the Book : ";
    cin>>pages;
}
void book::putdata()
{
    cout<<"Title : "<<title<<endl;
    cout<<"Author : "<<author<<endl;
    cout<<"Price : "<<price<<endl;
    cout<<"Number of Pages : "<<pages<<endl;
}
int main()
{
    book b1;
    b1.getdata();
    b1.putdata();
    return 0;
}
