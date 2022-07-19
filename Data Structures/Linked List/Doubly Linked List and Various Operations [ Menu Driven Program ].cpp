#include<iostream>
using namespace std;
struct node
{
    node *prev;
    int info;
    node *next;
}*start,*newptr,*ptr,*temp;
node *create_new_node(int n)
{
    ptr = new node;
    ptr->prev = NULL;
    ptr->info = n;
    ptr->next = NULL;
    return(ptr);
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
        while(temp!=NULL)
        {
            cout<<temp->info<<" <- ";
            temp = temp->next;
        }
        cout<<"!!!"<<endl;
    }
}
void insert_beg(node *np)
{
    if(start==NULL)
    {
        start = np;
    }
    else
    {
        np->next = start;
        start->prev = np;
        start = np;
    }
}
void insert_end(node *np)
{
    if(start==NULL)
    {
        start = np;
    }
    else
    {
        temp = start;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = np;
        np->prev = temp;
    }
}
void insert_after(int d,node *np)
{
    temp = start;
    while(temp!=NULL && temp->info!=d)
    {
        temp = temp->next;
    }
    if(temp->info==d)
    {
        if(temp->next==NULL)
        {
            temp->next = np;
            np->prev = temp;
            return;
        }
        np->next = temp->next;
        temp->next->prev = np;
        np->prev = temp;
        temp->next = np;
    }
    else
    {
        cout<<"Data Not Found in the Linked List!..."<<endl;
    }
}
void insert_before(int d,node *np)
{
    temp = start;
    while(temp!=NULL && temp->info!=d)
    {
        temp = temp->next;
    }
    if(temp->info==d)
    {
        if(temp->prev == NULL)
        {
            np->next = temp;
            temp->prev = np;
            start = np;
            return;
        }
        temp->prev->next = np;
        np->prev = temp->prev;
        np->next = temp;
        temp->prev = np;
    }
    else
    {
        cout<<"Data Not Found in the Linked List!..."<<endl;
    }
}
void delete_beg()
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = start;
        start = start->next;
        cout<<temp->info<<" Deleted!..."<<endl;
        delete(temp);
    }
}
void delete_end()
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = start;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        if(temp->prev==NULL)
        {
            cout<<temp->info<<" Deleted!..."<<endl;
            delete(temp);
            return;
        }
        temp->prev->next = NULL;
        cout<<temp->info<<" Deleted!..."<<endl;
        delete(temp);
    }
}
void delete_after(int d)
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = start;
        while(temp!=NULL && temp->info!=d)
        {
            temp = temp->next;
        }
        if(temp==NULL)
        {
            cout<<"Data not Found in the Linked List!..."<<endl;
            return;
        }
        node *temp2;
        temp2 = temp->next;
        if(temp2==NULL)
        {
            cout<<"Data not Found in the Linked List!..."<<endl;
        }
        else
        {
            temp->next = temp2->next;
            temp2->next->prev = temp;
            cout<<temp2->info<<" Deleted!..."<<endl;
            delete(temp2);
        }
    }
}
void delete_before(int d)
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = start;
        while(temp!=NULL && temp->info!=d)
        {
            temp = temp->next;
        }
        if(temp==NULL)
        {
            cout<<"Data not Found in the Linked List!..."<<endl;
            return;
        }
        node *temp2;
        temp2 = temp->prev;
        if(temp2==NULL)
        {
            cout<<"Data not Found in the Linked List!..."<<endl;
        }
        else
        {
            temp->prev = temp2->prev;
            temp2->prev->next = temp;
            cout<<temp2->info<<" Deleted!..."<<endl;
            delete(temp2);
        }
    }
}
void searching(int d)
{
    temp = start;
    while(temp!=NULL && temp->info!=d)
    {
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Data not Found in the Linked List!..."<<endl;
    }
    else
    {
        cout<<d<<" Found in the Linked List!..."<<endl;
    }
}
void delete_ll()
{
    if(start==NULL)
    {
        cout<<"Linked List is Already Empty!..."<<endl;
    }
    else
    {
        while(start!=NULL)
        {
            temp = start;
            start = start->next;
            cout<<temp->info<<" Deleted!..."<<endl;
            delete(temp);
        }
    }
}
int main()
{
    start = NULL;
    int item,a,data;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"\nDoubly Linked List and Various Operations!..."<<endl;
        cout<<"Enter your Choice : "<<endl;
        cout<<" 1. Traversing in the Linked List"<<endl;
        cout<<" 2. Insertion at the Beginning of the Linked List"<<endl;
        cout<<" 3. Insertion at the End of the Linked List"<<endl;
        cout<<" 4. Insertion After a Given Node "<<endl;
        cout<<" 5. Insertion Before a Given Node "<<endl;
        cout<<" 6. Deletion at the Beginning of the Linked List"<<endl;
        cout<<" 7. Deletion at the End of the Linked List"<<endl;
        cout<<" 8. Deletion After a Given Node "<<endl;
        cout<<" 9. Deletion Before a Given Node "<<endl;
        cout<<" 10. Searching in the Linked List"<<endl;
        cout<<" 11. Exit"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
            cout<<"Traversing in the Linked List"<<endl;
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 2:
            cout<<"Insertion at the Beginning of the Linked List"<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            newptr = create_new_node(item);
            insert_beg(newptr);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 3:
            cout<<"Insertion at the End of the Linked List"<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            newptr = create_new_node(item);
            insert_end(newptr);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 4:
            cout<<"Insertion After a Given Node in the Linked List"<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            cout<<"After which Data you want to Insert the Element : ";
            cin>>data;
            newptr = create_new_node(item);
            insert_after(data,newptr);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 5:
            cout<<"Insertion Before a Given Node in the Linked List"<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            cout<<"Before which Data you want to Insert the Element : ";
            cin>>data;
            newptr = create_new_node(item);
            insert_before(data,newptr);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 6:
            cout<<"Deletion at the Beginning of the Linked List..."<<endl;
            delete_beg();
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 7:
            cout<<"Deletion at the End of the Linked List..."<<endl;
            delete_end();
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 8:
            cout<<"Deletion After a Given Node in the Linked List..."<<endl;
            cout<<"Enter the Data After which you want to Delete the Element : ";
            cin>>data;
            delete_after(data);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 9:
            cout<<"Deletion Before a Given Node in the Linked List..."<<endl;
            cout<<"Enter the Data Before which you want to Delete the Element : ";
            cin>>data;
            delete_before(data);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 10:
            cout<<"Searching in the Linked List..."<<endl;
            cout<<"The Linked List is : "<<endl;
            traverse();
            cout<<"Enter the Element to be Searched : ";
            cin>>data;
            searching(data);
            break;

        case 11:
            delete_ll();
            cout<<"\nThank You!..."<<endl;
            exit(1);
            break;

        default:
            cout<<"Wrong Choice Entered!...Please Try Again..."<<endl;
        }
    }
    return 0;
}
