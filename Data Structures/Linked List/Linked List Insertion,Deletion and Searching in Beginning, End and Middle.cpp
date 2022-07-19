#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*start,*newptr,*ptr,*End,*temp;
node *Create_New_Node(int n)
{
    ptr = new node;
    ptr->info=n;
    ptr->next=NULL;
    return(ptr);
}
node* Searching(int n)
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty..."<<endl;
        exit(1);
    }
    temp=start;
    while(temp!=NULL)
    {
        if(temp->info==n)
        {
            return(temp);
        }
        temp=temp->next;
    }
    return(NULL);
}
void Insert_Beg(node *np)
{
    if(start==NULL)
    {
        start=End=np;
    }
    else
    {
        np->next=start;
        start=np;
    }
}
void Insert_End(node *np)
{
    if(start==NULL)
    {
        start=End=np;
    }
    else
    {
        End->next=np;
        End=np;
    }
}
void Insert_After(node* tmp,node* np)
{
    np->next=tmp->next;
    tmp->next=np;
}
void Delete_Beg()
{
    if(start==NULL)
    {
        cout<<"UNDERFLOW!..."<<endl;
        exit(1);
    }
    else
    {
        temp=start;
        start=start->next;
        cout<<temp->info<<" Deleted form the Linked List..."<<endl;
        delete temp;
    }
}
void Delete_End()
{
    temp = start;
    if(start==NULL)
    {
        cout<<"UNDERFLOW!..."<<endl;
        exit(1);
    }
    else if(temp->next==NULL)
    {
        start = NULL;
        delete temp;
    }
    else
    {
        node *pred;
        pred = NULL;
        while(temp->next!=NULL)
        {
            pred=temp;
            temp=temp->next;
        }
        pred->next=NULL;
        cout<<temp->info<<" Deleted form the Linked List..."<<endl;
        delete temp;
    }
}
int Delete_Particular(int n)
{
    if(start == NULL)
    {
        cout<<"Linked List is Empty..."<<endl;
        exit(1);
    }
    node *pred;
    pred = NULL;
    temp = start;
    /*while(temp!=NULL)
    {
        if(temp->info == n)
        {
            if(pred==NULL)
            {
                start=start->next;
                cout<<temp->info<<" is Deleted form the Linked List..."<<endl;
                delete temp;
                return 0;
            }
            pred->next=temp->next;
            cout<<temp->info<<" is Deleted form the Linked List..."<<endl;
            delete temp;
            return 0;
        }
        pred = temp;
        temp=temp->next;
    }
    return 1;*/
    while((temp!=NULL) && (temp->info!=n))
    {
        pred = temp;
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"World"<<endl;
        return 1;
    }
    if(pred==NULL)
    {
        start=start->next;
    }
    else
    {
        pred->next=temp->next;
    }
    delete temp;
    return 0;
}
void Traverse(node *start)
{
    node *temp=start;
    if(temp==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->info<<" <- ";
            temp=temp->next;
        }
        cout<<"!!!"<<endl;
    }
}
int main()
{
    int item;
    start=NULL;
    cout<<"\tLinked List....."<<endl;
    char ch='y';
    cout<<"\nInsertion at the Beginning of the Linked List..."<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Item to be Inserted in the Linked List : ";
        cin>>item;
        newptr = Create_New_Node(item);
        if(newptr == NULL)
        {
            cout<<"Cannot Create New Node, UNDERFLOW!..."<<endl;
            exit(1);
        }
        else
        {
            cout<<"New Node Created Successfully!..."<<endl;
        }
        cout<<"Now Inserting the New Node at the Beginning of the Linked List..."<<endl;
        Insert_Beg(newptr);
        cout<<"So the Linked List is : \n"<<endl;
        Traverse(start);
        cout<<"\nWant to Insert another Element at the Beginning of the Linked List...[Y/N]...";
        cin>>ch;
    }
    cout<<"Now Insertion at End of the Linked List Starts..."<<endl;
    ch='y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"\nEnter the Item to be Inserted in the End of Linked List : ";
        cin>>item;
        newptr = Create_New_Node(item);
        if(newptr == NULL)
        {
            cout<<"Cannot Create New Node, UNDERFLOW!..."<<endl;
            exit(1);
        }
        else
        {
            cout<<"New Node Created Successfully!..."<<endl;
        }
        cout<<"Now Inserting the New Node at the End of the Linked List..."<<endl;
        Insert_End(newptr);
        cout<<"So the Linked List is : \n"<<endl;
        Traverse(start);
        cout<<"\nWant to Insert another Element at the End of the Linked List...[Y/N]...";
        cin>>ch;
    }
    cout<<"\nNow Insertion at a Particular Node of the Linked List Starts..."<<endl;
    ch='y';
    while(ch=='y'||ch=='Y')
    {
        int tmp;
        node *temp1;
        cout<<"Enter the Item to be Inserted in the Linked List : ";
        cin>>item;
        cout<<"Enter the Element After which you have to Insert the Element in the Linked List : ";
        cin>>tmp;
        temp1=Searching(tmp);
        if(temp1==NULL)
        {
            cout<<"Item not Found in the List..."<<endl;
            continue;
        }
        newptr = Create_New_Node(item);
        if(newptr == NULL)
        {
            cout<<"Cannot Create New Node, UNDERFLOW!..."<<endl;
            exit(1);
        }
        else
        {
            cout<<"New Node Created Successfully!..."<<endl;
        }
        cout<<"Now Inserting the New Node in the Linked List..."<<endl;
        Insert_After(temp,newptr);
        cout<<"So the Linked List is : \n"<<endl;
        Traverse(start);
        cout<<"\nWant to Insert another Element in the Linked List...[Y/N]...";
        cin>>ch;
    }
    cout<<"\nNow Deletion at the Beginning of the Linked List Starts..."<<endl;
    cout<<"Want to Delete more Element from the Linked List...[Y/N]...";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        Delete_Beg();
        cout<<"So the Linked List is : \n"<<endl;
        Traverse(start);
        cout<<"\nWant to Delete more Element from the Linked List...[Y/N]...";
        cin>>ch;
    }
    cout<<"\nNow Deletion at the End of the Linked List Starts..."<<endl;
    cout<<"Want to Delete Element from the Linked List...[Y/N]...";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        Delete_End();
        cout<<"So the Linked List is : \n"<<endl;
        Traverse(start);
        cout<<"\nWant to Delete more Element from the Linked List...[Y/N]...";
        cin>>ch;
    }
    cout<<"\nNow Deletion at a Particular Node of the Linked List Starts..."<<endl;
    cout<<"Want to Delete Element from the Linked List...[Y/N]...";
    cin>>ch;
    int tmp1,a;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Item to be Deleted : ";
        cin>>tmp1;
        a=Delete_Particular(tmp1);
        if(a==1)
        {
            cout<<"Element not found in the List..."<<endl;
            continue;
        }
        cout<<"So the Linked List is : \n"<<endl;
        Traverse(start);
        cout<<"\nWant to Delete more Elements from the Linked List...[Y/N]...";
        cin>>ch;
    }
    return 0;
}
