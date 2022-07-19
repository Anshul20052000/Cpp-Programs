
#include<iostream>
using namespace std;
struct book
{
    private:
    int bookid;
    char title[20];
    float price;
    public:
    void input()
    {
        cout<<"Enter the Bookid : "<<endl;
        cin>>bookid;
        cout<<"Enter the Title of the Book : "<<endl;
        cin.ignore();
        cin>>title;
        cout<<"Enter the Price of the Book : "<<endl;
        cin>>price;
    }
    void display()
    {
        cout<<"The Book ID is : "<<bookid<<endl;
        cout<<"The Book title is : "<<title<<endl;
        cout<<"The Price of the Book is : "<<price<<endl;
    }
};
book input();
void display(book);
int main()
{
    book b1;
    cout<<sizeof(b1)<<endl;
    cout<<"Enter the Details of the Book : "<<endl;
    b1.input();
    cout<<"Enter the Book ID : "<<endl;
    cin>>b1.bookid;
    cout<<sizeof(b1)<<endl;
    b1.display();
    return 0;
}
