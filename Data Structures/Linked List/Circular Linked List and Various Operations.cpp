#include<iostream>
using namespace std;
struct node
{
    int info;
    node *link;
}*start,*newptr,*temp,*pred;
node *create_new_node()
{
    node *ptr;
    ptr = new node;
    return (ptr);
}
void traverse()
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = start;
        while(temp->link!=start)
        {
            cout<<" "<<temp->info<<" <-";
            temp = temp->link;
        }
        cout<<" "<<temp->info<<" <- !!!"<<endl;
    }
}
void insert_beg(int item,node *p)
{
    p->info = item;
    p->link = NULL;
    if(start == NULL)
    {
        start = p;
        p->link = start;
    }
    else
    {
        temp = start;
        while(temp->link!=start)
        {
            temp = temp->link;
        }
        p->link = start;
        temp->link = p;
        start = p;
    }
}
void insert_end(int item,node *p)
{
    p->info = item;
    p->link = NULL;
    if(start == NULL)
    {
        start = p;
        p->link = start;
    }
    else
    {
        temp = start;
        while(temp->link!=start)
        {
            temp = temp->link;
        }
        p->link = start;
        temp->link = p;
    }
}
void delete_beg()
{
    if(start==NULL)
    {
        cout<<"UNDERFLOW!!!..."<<endl;
    }
    else
    {
        if(start == start->link)
        {
            cout<<start->info<<" Deleted..."<<endl;
            delete (start);
            start = NULL;
        }
        else
        {
            temp = start;
            while(temp->link!=start)
            {
                temp = temp->link;
            }
            temp->link = start->link;
            temp = start;
            start = start->link;
            cout<<temp->info<<" Deleted..."<<endl;
            delete(temp);
        }
    }
}
void delete_end()
{
    if(start==NULL)
    {
        cout<<"UNDERFLOW!!!..."<<endl;
    }
    else
    {
        if(start == start->link)
        {
            cout<<start->info<<" Deleted..."<<endl;
            delete (start);
            start = NULL;
        }
        else
        {
            pred = NULL;
            temp = start;
            while(temp->link!=start)
            {
                pred = temp;
                temp = temp->link;
            }
            pred->link = start;
            cout<<temp->info<<" Deleted..."<<endl;
            delete(temp);
        }
    }
}
void searching(int item)
{
    temp = start;
    while(temp->link!=start)
    {
        if(item==temp->info)
        {
            cout<<temp->info<<" Found in the CLL..."<<endl;
            return;
        }
        temp = temp->link;
    }
    if(item==temp->info)
    {
        cout<<temp->info<<" Found in the CLL..."<<endl;
        return;
    }
    cout<<item<<" Not Found in the CLL..."<<endl;
}
void delete_ll()
{
    if(start==NULL)
    {
        cout<<"Linked List is Already Empty!..."<<endl;
        exit(1);
    }
    temp=start;
    while(temp->link!=start)
    {
        temp = temp->link;
    }
    temp->link=NULL;
    while(start!=NULL)
    {
        temp = start;
        start = start->link;
        cout<<" "<<temp->info<<" Deleted"<<endl;
        delete(temp);
    }
}
int main()
{
    int item;
    start = NULL;
    char ch='y';
    cout<<"Insertion at the Beginning of the Circular LL"<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Item to be inserted in the CLL : ";
        cin>>item;
        newptr = create_new_node();
        insert_beg(item,newptr);
        cout<<"The CLL is : "<<endl;
        traverse();
        cout<<"Want to Insert more Elements in the CLL...  "<<endl;
        cin>>ch;
    }
    cout<<"\nNow Insertion at the End Starts..."<<endl;
    cout<<"Want to Insert a Element at the End of CLL...[Y/N] : ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Item to be inserted in the CLL : ";
        cin>>item;
        newptr = create_new_node();
        insert_end(item,newptr);
        cout<<"The CLL is : "<<endl;
        traverse();
        cout<<"Want to Insert more Elements in the CLL...  "<<endl;
        cin>>ch;

    }
    cout<<"Now the Deletion at the Beginning Starts..."<<endl;
    cout<<"Want to Delete Element from the CLL...[Y/N] : ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        delete_beg();
        cout<<"The CLL is : "<<endl;
        traverse();
        cout<<"Want to Delete more Elements in the CLL...  "<<endl;
        cin>>ch;
    }
    cout<<"Now the Deletion at the End Starts..."<<endl;
    cout<<"Want to Delete Element from the CLL...[Y/N] : ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        delete_end();
        cout<<"The CLL is : "<<endl;
        traverse();
        cout<<"Want to Delete more Elements in the CLL...  "<<endl;
        cin>>ch;
    }
    cout<<"Now the Searching in the CLL Starts..."<<endl;
    cout<<"Want to Search an Element from the CLL...[Y/N] : ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Searched from the CLL : ";
        cin>>item;
        searching(item);
        cout<<"Want to Search more Elements from the CLL...[Y/N] : ";
        cin>>ch;
    }
    delete_ll();
    return 0;
}
