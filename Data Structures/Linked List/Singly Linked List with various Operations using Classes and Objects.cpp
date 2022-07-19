#include<iostream>
using namespace std;
class nodetype
{
public:
    int info;
    nodetype *link;
};
typedef class nodetype* node;
class singly_link_list
{
private:
    node start;
public:
    singly_link_list()
    {
        start = NULL;
    }
    ~singly_link_list();
    void insert_beg(int);
    void insert_end(int);
    void delete_beg();
    void delete_end();
    void display();
};
void singly_link_list::insert_beg(int item)
{
    node new1 = new nodetype();
    new1->info = item;
    new1->link = start;
    start = new1;
}
void singly_link_list::insert_end(int item)
{
    node new1 = new nodetype();
    new1->info = item;
    new1->link = NULL;
    if (start==NULL)
    {
        start = new1;
    }
    else
    {
        node temp;
        temp = start;
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = new1;
    }
}
void singly_link_list::delete_beg()
{
    node temp;
    temp = start;
    start = start->link;
    cout<<"The Number Deleted is "<<temp->info<<endl;
    delete temp;
}
void singly_link_list::delete_end()
{
    node temp,pred;
    pred = NULL;
    temp = start;
    while(temp->link!=NULL)
    {
        pred = temp;
        temp = temp->link;
    }
    pred->link = NULL;
    cout<<"The Number Deleted is "<<temp->info<<endl;
    delete(temp);
}
void singly_link_list::display()
{
    node temp;
    temp = start;
    while(temp!=NULL)
    {
        cout<<"-> "<<temp->info<<" ";
        temp = temp->link;
    }
    cout<<endl;
}
int main()
{
    singly_link_list* sll = new singly_link_list();
    cout<<"Insert Beginning : "<<endl;
    sll->insert_beg(2);
    sll->insert_beg(15);
    sll->display();
    cout<<"\n Insert End"<<endl;
    sll->insert_end(25);
    sll->display();
    cout<<"\n Deletion at the Beginning : "<<endl;
    sll->delete_beg();
    sll->display();
    cout<<"\n Deletion at the End : "<<endl;
    sll->delete_end();
    sll->display();;
    return 0;
}
