#include<iostream>
#include<stdlib.h>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;
    void input()
{
    cout<<"Enter bookid , Title and Price "<<endl;
    cin>>bookid>>title>>price;
}
void display()
{
    cout<<"The Bookid is  "<<bookid<<" Title is "<<title<<" Price is "<<price<<endl;

}};
int main()
{
  system("Cls");
  Book B1;
  B1.input();
  B1.display();
  return 0;
}
