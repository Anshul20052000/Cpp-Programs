#include<iostream>
#include<string.h>
using namespace std;
class book
{
private:
    char *title,*author,*publisher;
    float *price;
    int *stock;

public:
    book()
    {
        title = new char[30];
        author = new char[30];
        publisher = new char[30];
        price = new float;
        stock = new int;
    }
    void FeedBookData();
    void EditBook();
    void DisplayBook();
    int SearchBook(char[],char[]);
    void BuyBook();
};
void book::FeedBookData()
{
    cout<<endl;
    cin.ignore();
    cout<<"Enter the Title of the Book : ";
    cin.getline(title,30);
    cout<<"Enter the Name of the Author of Book : ";
    cin.getline(author,30);
    cout<<"Enter the Name of the Publisher of Book : ";
    cin.getline(publisher,30);
    cout<<"Enter the Price of the Book : ";
    cin>>*price;
    cout<<"Enter the Stock of the Book : ";
    cin>>*stock;
    cout<<endl;
}
void book::EditBook()
{
    cout<<endl;
    cin.ignore();
    cout<<"Enter the Title of the Book : ";
    cin.getline(title,30);
    cout<<"Enter the Name of the Author of Book : ";
    cin.getline(author,30);
    cout<<"Enter the Name of the Publisher of Book : ";
    cin.getline(publisher,30);
    cout<<"Enter the Price of the Book : ";
    cin>>*price;
    cout<<"Enter the Stock of the Book : ";
    cin>>*stock;
    cout<<endl;
}
void book::DisplayBook()
{
    cout<<endl;
    cout<<"Book Title : "<<title<<endl;
    cout<<"Book Author : "<<author<<endl;
    cout<<"Book Publisher : "<<publisher<<endl;
    cout<<"Price of Book : "<<*price<<endl;
    cout<<"Stock Available : "<<*stock<<endl;
    cout<<endl;
}
int book::SearchBook(char tbuy[30],char abuy[30])
{
    if((strcmp(tbuy,title)==0)&&(strcmp(abuy,author)==0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void book::BuyBook()
{
    cout<<endl;
    int Count;
    cout<<"Enter the Number of Books you want to Buy : ";
    cin>>Count;
    if(Count<=*stock)
    {
        *stock = *stock - Count;
        cout<<"Book Bought Successfully!..."<<endl;
        cout<<"Your Amount is : "<<(*price) * Count<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"This Book is Out of Stock!..."<<endl;
        cout<<endl;
    }

}
int main()
{
    book *B[20];
    int choice,i = 0,t;
    char TitleBuy[30],AuthorBuy[30];
    while(1)
    {
        system("pause");
        system("cls");
        cout<<" #### Book Shop #### "<<endl;
        cout<<"\n 1. Entry of New Book "<<endl;
        cout<<" 2. Buy Book "<<endl;
        cout<<" 3. Search for Book "<<endl;
        cout<<" 4. Edit Existing Book "<<endl;
        cout<<" 5. Display the Whole Library "<<endl;
        cout<<" 6. Exit "<<endl;
        cout<<" Enter your Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1 :
            cout<<" Entry of New Book "<<endl;
            B[i] = new book;
            B[i]->FeedBookData();
            i++;
            cout<<"Book Created Successfully..."<<endl;
            break;

        case 2 :
            cout<<" Buy Book "<<endl;
            cout<<"Enter the Details of the Book you want to Buy..."<<endl;
            cin.ignore();
            cout<<"Enter Book Title : ";
            cin.getline(TitleBuy,30);
            cout<<"Enter Book Author : ";
            cin.getline(AuthorBuy,30);

            for(t=0;t<i;t++)
            {
                if(B[t]->SearchBook(TitleBuy,AuthorBuy))
                {
                    cout<<"Book Found Successfully..."<<endl;
                    B[t]->BuyBook();
                    break;
                }
            }
            if(t == i)
            {
                cout<<"This Book is Out of Stock!..."<<endl;
            }

            break;

        case 3 :
            cout<<" Search Book"<<endl;
            cout<<"Enter the Details of the Book you want to Buy..."<<endl;
            cin.ignore();
            cout<<"Enter Book Title : ";
            cin.getline(TitleBuy,30);
            cout<<"Enter Book Author : ";
            cin.getline(AuthorBuy,30);
            for(t=0;t<i;t++)
            {
                if(B[t]->SearchBook(TitleBuy,AuthorBuy))
                {
                    cout<<"This Book Found Successfully!..."<<endl;
                    B[t]->DisplayBook();
                    break;
                }
            }

            if(t == i)
            {
                cout<<"This Book is Out of Stock!..."<<endl;
            }
            break;

        case 4 :
            cout<<" Edit Existing Book"<<endl;
            cout<<"Enter the Details of the Book you want to Buy..."<<endl;
            cin.ignore();
            cout<<"Enter Book Title : ";
            cin.getline(TitleBuy,30);
            cout<<"Enter Book Author : ";
            cin.getline(AuthorBuy,30);

            for(t=0;t<i;t++)
            {
                if(B[t]->SearchBook(TitleBuy,AuthorBuy))
                {
                    cout<<"This Book Found Successfully!..."<<endl;
                    B[t]->DisplayBook();
                    B[t]->EditBook();
                    cout<<"\n Book Modified Successfully..."<<endl;
                    break;
                }
            }

            if(t == i)
            {
                cout<<"This Book is not Found!..."<<endl;
            }
            break;

        case 5 :
            cout<<" Display the Whole Library "<<endl;
            if(i==0)
            {
                cout<<"Library is Empty..."<<endl;
                break;
            }
            for(t=0;t<i;t++)
            {
                cout<<"Book "<<t+1<<" :- "<<endl;
                B[t]->DisplayBook();
                cout<<endl;
            }
            break;

        case 6 :
            cout<<"Thank you for using our Service...Exiting"<<endl;
            exit(0);

        default :
            cout<<"False Input!!!... Try Again..."<<endl;
        }
    }

    return 0;
}
