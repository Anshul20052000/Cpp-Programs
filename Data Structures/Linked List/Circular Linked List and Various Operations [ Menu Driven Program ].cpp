#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*start,*newptr,*ptr,*temp;
node *create_new_node(int n)
{
    ptr = new node;
    ptr->info = n;
    ptr->next = NULL;
    return(ptr);
}
void traverse()
{
    if(start==NULL)
    {
        cout<<"The Circular Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = start;
        while(temp->next!=start)
        {
            cout<<temp->info<<" <- ";
            temp = temp->next;
        }
        cout<<temp->info<<" <- !!!"<<endl;
    }
}
void insert_beg(node *np)
{
    if(start==NULL)
    {
        start = np;
        np->next = start;
    }
    else
    {
        temp = start;
        while(temp->next!=start)
        {
            temp = temp->next;
        }
        temp->next = np;
        np->next = start;
        start = np;
    }
}
void insert_end(node *np)
{
    if(start==NULL)
    {
        start = np;
        np->next = start;
    }
    else
    {
        temp = start;
        while(temp->next!=start)
        {
            temp = temp->next;
        }
        temp->next = np;
        np->next = start;
    }
}
void delete_beg()
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else if(start->next==start)
    {
        cout<<start->info<<" Deleted!..."<<endl;
        delete(start);
        start = NULL;
    }
    else
    {
        temp = start;
        while(temp->next!=start)
        {
            temp = temp->next;
        }
        temp->next = start->next;
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
    else if(start->next==start)
    {
        cout<<start->info<<" Deleted!..."<<endl;
        delete(start);
        start = NULL;
    }
    else
    {
        node *pred;
        pred = NULL;
        temp = start;
        while(temp->next!=start)
        {
            pred = temp;
            temp = temp->next;
        }
        pred->next = start;
        cout<<temp->info<<" Deleted!..."<<endl;
        delete(temp);
    }
}
void searching(int n)
{
    temp = start;
    while(temp->next!=start)
    {
        if(temp->info==n)
        {
            cout<<n<<" Found in the Linked List..."<<endl;
            return;
        }
        temp = temp->next;
    }
    if(temp->info==n)
    {
        cout<<n<<" Found in the Linked List..."<<endl;
        return;
    }
    cout<<n<<" Not Found in the Linked List!..."<<endl;
}
void delete_ll()
{
    if(start==NULL)
    {
        cout<<"Linked List is Already Empty!..."<<endl;
    }
    else
    {
        temp = start;
        while(temp->next!=start)
        {
            temp = temp->next;
        }
        temp->next = NULL;
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
    int item,a;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"\nCircular Linked List and Various Operations!..."<<endl;
        cout<<"Enter your Choice : "<<endl;
        cout<<" 1. Traversing "<<endl;
        cout<<" 2. Insertion at the Beginning "<<endl;
        cout<<" 3. Insertion at the End"<<endl;
        cout<<" 4. Deletion at the Beginning "<<endl;
        cout<<" 5. Deletion at the End"<<endl;
        cout<<" 6. Searching in the CLL"<<endl;
        cout<<" 7. Exit"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
            cout<<"Traversing in the Circular Linked List..."<<endl;
            cout<<"The Circular Linked List is : "<<endl;
            traverse();
            break;

        case 2:
            cout<<"Insertion at the Beginning of the Linked List..."<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            newptr = create_new_node(item);
            insert_beg(newptr);
            cout<<"The Linked List is :"<<endl;
            traverse();
            break;

        case 3:
            cout<<"Insertion at the End of the Linked List..."<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            newptr = create_new_node(item);
            insert_end(newptr);
            cout<<"The Linked List is :"<<endl;
            traverse();
            break;

        case 4:
            cout<<"Deletion at the Beginning of the Linked List..."<<endl;
            delete_beg();
            cout<<"The Linked List is :"<<endl;
            traverse();
            break;

        case 5:
            cout<<"Deletion at the End of the Linked List..."<<endl;
            delete_end();
            cout<<"The Linked List is :"<<endl;
            traverse();
            break;

        case 6:
            cout<<"Searching in the Circular Linked List!..."<<endl;
            cout<<"The Linked List is :"<<endl;
            traverse();
            cout<<"Enter the Element to be Searched : ";
            cin>>item;
            searching(item);
            break;

        case 7:
            delete_ll();
            cout<<"\nThank You!!!"<<endl;
            exit(1);
            break;

        default:
            cout<<"Wrong Choice!...Please Try Again..."<<endl;
        }
    }
    return 0;
}
