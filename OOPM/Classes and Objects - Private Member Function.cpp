#include<iostream>
using namespace std;
class book
{
    char title[20];
    float price;
    void init()
    {
        cout<<"Hello World!..."<<endl;
    }
public:
    void input();
    void show();
};
void book::input()
{
    cout<<"Enter the Book Title : ";
    cin>>title;
    cout<<"Enter the Book Price : ";
    cin>>price;
    init();
}
void book::show()
{
    cout<<"Book Name : "<<title<<endl;
    cout<<"Book Price : "<<price<<endl;
}
int main()
{
    book ob1;
    ob1.input();
    ob1.show();
    return 0;
}
