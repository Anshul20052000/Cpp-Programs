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
void insert_beg(node *p)
{
    if(start==NULL)
    {
        start = p;
    }
    else
    {
        p->next = start;
        start = p;
    }
}
void insert_end(node *p)
{
    if(start==NULL)
    {
        start = p;
    }
    else
    {
        temp = start;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
    }
}
void insert_after(node *p,int data)
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty, so you cannot Insert a Element"<<endl;
        delete(p);
    }
    else
    {
        temp = start;
        while(temp!=NULL && temp->info!=data)
        {
            temp = temp->next;
        }
        if(temp==NULL)
        {
            cout<<"Data not Found!..."<<endl;
            delete(p);
            return;
        }
        p->next = temp->next;
        temp->next = p;
    }
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
void delete_beg()
{
    if(start==NULL)
    {
        cout<<"UNDERFLOW!..."<<endl;
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
        cout<<"UNDERFLOW!..."<<endl;
    }
    else if(start->next==NULL)
    {
        temp = start;
        cout<<temp->info<<" Deleted!..."<<endl;
        delete(temp);
        start = NULL;
    }
    else
    {
        node *prev;
        prev = NULL;
        temp = start;
        while(temp->next!=NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        cout<<temp->info<<" Deleted!..."<<endl;
        delete(temp);
    }
}
void delete_node(int n)
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = start;
        node *prev;
        prev = NULL;
        while(temp!=NULL && temp->info!=n)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp==NULL)
        {
            cout<<"Item Not Found!..."<<endl;
            return ;
        }
        prev->next = temp->next;
        cout<<temp->info<<" Deleted!..."<<endl;
        delete(temp);
    }
}
void searching(int n)
{
    temp = start;
    while(temp!=NULL && temp->info!=n)
    {
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Element not Found in the Linked List!..."<<endl;
    }
    else
    {
        cout<<n<<" Found in the Linked List!..."<<endl;
    }
}
void delete_ll()
{
    if(start==NULL)
    {
        cout<<"Linked List is already Empty!..."<<endl;
    }
    else
    {
        while(start!=NULL)
        {
            temp = start;
            start = start->next;
            cout<<temp->info<<" Deleted..."<<endl;
            delete(temp);
        }
    }
}
int main()
{
    start = NULL;
    char ch = 'y';
    int item,a,data;
    cout<<"Unordered Linked List Implementation : "<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter your Choice :-"<<endl;
        cout<<" 1. Insertion at the Beginning of the Linked List"<<endl;
        cout<<" 2. Insertion at the End of the Linked List"<<endl;
        cout<<" 3. Insertion after a Particular Node"<<endl;
        cout<<" 4. Deletion at the Beginning of the Linked List"<<endl;
        cout<<" 5. Deletion at the End of the Linked List"<<endl;
        cout<<" 6. Deletion of a Particular Node"<<endl;
        cout<<" 7. Searching in the Linked List"<<endl;
        cout<<" 8. Traversing in the Linked List"<<endl;
        cout<<" 9. Exit"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
            cout<<"Insertion at the Beginning of the Linked List"<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            newptr = create_new_node(item);
            insert_beg(newptr);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 2:
            cout<<"Insertion at the End of the Linked List"<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            newptr = create_new_node(item);
            insert_end(newptr);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 3:
            cout<<"Insertion after a Particular Node in the Linked List"<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            cout<<"The Linked List is : "<<endl;
            traverse();
            cout<<"Enter the Data after which you want to Insert Element : ";
            cin>>data;
            newptr = create_new_node(item);
            insert_after(newptr,data);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 4:
            cout<<"Deletion at the Beginning of the Linked List!..."<<endl;
            delete_beg();
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 5:
            cout<<"Deletion at the End of the Linked List!..."<<endl;
            delete_end();
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 6:
            cout<<"Deletion of the Particular Node!..."<<endl;
            cout<<"Please Select Element except the Starting and the End Node!!!"<<endl;
            cout<<"Enter the Element to be Deleted : ";
            cin>>item;
            delete_node(item);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 7:
            cout<<"Searching in the Linked List!..."<<endl;
            cout<<"Enter the Element to be Searched : ";
            cin>>item;
            searching(item);
            cout<<"The Linked List is : "<<endl;
            traverse();
            break;

        case 8:
            cout<<"Traversing in the Linked List!..."<<endl;
            traverse();
            break;

        case 9:
            exit(1);
            break;

        default:
            cout<<"You Entered a Wrong Choice!..."<<endl;
        }
        cout<<"Want to do more Operations on the Linked List...[Y/N] : ";
        cin>>ch;
    }
    delete_ll();
    return 0;
}
