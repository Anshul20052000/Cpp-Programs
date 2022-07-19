#include<iostream>
using namespace std;
struct node
{
    int info;
    node *prev;
    node *next;
}*start,*temp,*newptr;
node *create_new_node()
{
    node *ptr;
    ptr = new node;
    return(ptr);
}
void traverse()
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
        return;
    }
    temp = start;
    while(temp!=NULL)
    {
        cout<<" "<<temp->info<<" <-";
        temp = temp->next;
    }
    cout<<" !!!"<<endl;
}
void insert_beg(int n,node *p)
{
    p->info = n;
    p->prev = NULL;
    p->next = start;
    if(start==NULL)
    {
        start = p;
        return;
    }
    start->prev = p;
    start = p;
}
void insert_end(int n,node *p)
{
    p->info = n;
    p->next = NULL;
    temp = start;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
}
void insert_after(int n,int data,node *p)
{
    p->info = n;
    temp = start;
    while((temp!=NULL) && (temp->info!=data))
    {
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Data not Found in the DLL..."<<endl;
        delete(p);
        return;
    }
    p->next = temp->next;
    p->prev = temp;
    temp->next->prev = p;
    temp->next = p;
}
void insert_before(int n,int data,node *p)
{
    p->info = n;
    temp = start;
    while(temp!=NULL && temp->info!=data)
    {
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Data not Found in the DLL..."<<endl;
        delete(p);
        return;
    }
    p->next = temp;
    p->prev = temp->prev;
    temp->prev->next = p;
    temp->prev = p;
}
void delete_beg()
{
    if(start==NULL)
    {
        cout<<"UNDERFLOW!..."<<endl;
        return;
    }
    else
    {
        if(start->next==NULL)
        {
            cout<<start->info<<" Deleted..."<<endl;
            delete(start);
            start = NULL;
            return;
        }
        temp = start;
        start = start->next;
        cout<<temp->info<<" Deleted..."<<endl;
        delete(temp);
        start->prev = NULL;
    }
}
void delete_end()
{
    if(start==NULL)
    {
        cout<<"UNDERFLOW!..."<<endl;
        return;
    }
    else
    {
        if(start->next==NULL)
        {
            cout<<start->info<<" Deleted..."<<endl;
            delete(start);
            start = NULL;
            return;
        }
        temp = start;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        cout<<temp->info<<" Deleted..."<<endl;
        delete(temp);
    }
}
void delete_after(int data)
{
    if(start==NULL)
    {
        cout<<"UNDERFLOW!..."<<endl;
        return;
    }
    temp = start;
    while(temp!=NULL && temp->info!=data)
    {
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Data not Found!..."<<endl;
        return;
    }
    if(temp->next==NULL || temp->next->next==NULL)
    {
        cout<<"Wrong Data Selected!..."<<endl;
        return;
    }
    node *flag;
    flag = temp->next;
    temp->next = flag->next;
    flag->next->prev = temp;
    cout<<flag->info<<" Deleted..."<<endl;
    delete(flag);
}
void delete_before(int data)
{
    if(start==NULL)
    {
        cout<<"UNDERFLOW!..."<<endl;
        return;
    }
    temp = start;
    while(temp!=NULL && temp->info!=data)
    {
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Data not Found!..."<<endl;
        return;
    }
    if(temp==start || temp->prev==start)
    {
        cout<<"Wrong Data Selected!..."<<endl;
        return;
    }
    node *flag;
    flag = temp->prev;
    temp->prev = flag->prev;
    flag->prev->next = temp;
    cout<<flag->info<<" Deleted..."<<endl;
    delete(flag);
}
void delete_ll()
{
    if(start==NULL)
    {
        cout<<"Linked List is Already Empty!..."<<endl;
        exit(1);
    }
    while(start!=NULL)
    {
        temp = start;
        start = start->next;
        cout<<temp->info<<" Deleted..."<<endl;
        delete(temp);
    }
}
int main()
{
    start = NULL;
    int Item;
    char ch='y';
    cout<<"Insertion at the Beginning of the DLL..."<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted : ";
        cin>>Item;
        newptr = create_new_node();
        insert_beg(Item,newptr);
        traverse();
        cout<<"Want to Insert more Elements in the DLL...[Y/N] : ";
        cin>>ch;
    }
    cout<<"Now the Insertion at the End of the DLL..."<<endl;
    cout<<"Want to Insert Element in the DLL...[Y/N] : ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted : ";
        cin>>Item;
        newptr = create_new_node();
        insert_end(Item,newptr);
        traverse();
        cout<<"Want to Insert more Elements in the DLL...[Y/N] : ";
        cin>>ch;
    }
    cout<<"\nNow the Insertion after a Given Node in DLL... "<<endl;
    cout<<"Want to Insert Element...[Y/N] : ";
    cin>>ch;
    int data;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted : ";
        cin>>Item;
        cout<<"Enter the Data after which you want to Insert it : ";
        cin>>data;
        newptr = create_new_node();
        insert_after(Item,data,newptr);
        traverse();
        cout<<"Want to Insert more Elements in the DLL..[Y/N] : ";
        cin>>ch;
    }
    cout<<"\nNow the Insertion before a Given Node in DLL... "<<endl;
    cout<<"Want to Insert Element...[Y/N] : ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted : ";
        cin>>Item;
        cout<<"Enter the Data before which you want to Insert it : ";
        cin>>data;
        newptr = create_new_node();
        insert_before(Item,data,newptr);
        traverse();
        cout<<"Want to Insert more Elements in the DLL...[Y/N] : ";
        cin>>ch;
    }
    cout<<"Now the Deletion at the Beginning of the DLL starts..."<<endl;
    cout<<"Want to Delete Element from the DLL...[Y/N] : ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        delete_beg();
        traverse();
        cout<<"Want to Delete more Elements from the DLL...[Y/N] : ";
        cin>>ch;
    }
    cout<<"Now the Deletion at the End of the DLL starts..."<<endl;
    cout<<"Want to Delete Element from the DLL...[Y/N] : ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        delete_end();
        traverse();
        cout<<"Want to Delete more Elements from the DLL...[Y/N] : ";
        cin>>ch;
    }
    cout<<"Now the Deletion after a Given Node Starts..."<<endl;
    cout<<"Want to Delete Element from the DLL...[Y/N] : ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Data After which you want to Delete Element : ";
        cin>>data;
        delete_after(data);
        traverse();
        cout<<"Want to Delete more Elements from the DLL...[Y/N] : ";
        cin>>ch;
    }
    cout<<"Now the Deletion Before a Given Node Starts..."<<endl;
    cout<<"Want to Delete Element from the DLL...[Y/N] : ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Data Before which you want to Delete Element : ";
        cin>>data;
        delete_before(data);
        traverse();
        cout<<"Want to Delete more Elements from the DLL...[Y/N] : ";
        cin>>ch;
    }
    delete_ll();
}
