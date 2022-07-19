#include<iostream>
#include<string.h>
using namespace std;
class media
{
protected:
    char title[20];
    float price;
public:
    media(char *t,float p)
    {
        strcpy(title,t);
        price = p;
    }
    virtual void display()
    {

    }
};
class books:public media
{
    int pages;
public:
    books(char *t,float p,int pa):media(t,p)
    {
        pages = pa;
    }
    void display()
    {
        cout<<"Book Title : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Pages : "<<pages<<endl;
    }
};
class dvd:public media
{
    float cap;
public:
    dvd(char *t,float p,float c):media(t,p)
    {
        cap = c;
    }
    void display()
    {
        cout<<"Book Title : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Capacity : "<<cap<<endl;
    }
};
int main()
{
    media *bp;
    int ch;
    cout<<"1. Book \n2. DVD\nEnter your Choice : ";
    cin>>ch;
    if(ch==1)
    {
        books b("Let us C",450,1250);
        bp = &b;
        bp->display();
    }
    else if(ch==2)
    {
        dvd d("World Encyclopedia",500,4.3);
        bp = &d;
        bp->display();
    }
    else
    {
        cout<<"Wrong Choice Entered!..."<<endl;
    }
    return 0;
}
