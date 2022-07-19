#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*start,*newptr,*temp;
node *create_new_node(int n)
{
    node *ptr;
    ptr = new node;
    ptr->info = n;
    ptr->next = NULL;
    return(ptr);
}
void insertion(node *p)
{
    if(start==NULL)
    {
        start = p;
    }
    else if(p->info < start->info)
    {
        p->next = start;
        start = p;
    }
    else
    {
        node *succ;
        succ = start->next;
        temp = start;
        while(succ!=NULL && p->info >= succ->info)
        {
            temp = succ;
            succ = succ->next;
        }
        p->next = succ;
        temp->next = p;
    }
}
void deletion(int n)
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        node *pred;
        temp = start;
        pred = NULL;
        while(temp!=NULL && n!=temp->info)
        {
            if(n > temp->info)
            {
                pred = temp;
                temp = temp->next;
            }
            else
            {
                temp = NULL;
            }
        }
        if(temp==NULL)
        {
            cout<<"Element not Found in the Linked List!..."<<endl;
            return;
        }
        if(pred==NULL)
        {
            start = start->next;
        }
        else
        {
            pred->next = temp->next;
        }
        cout<<temp->info<<" Deleted!..."<<endl;
        delete(temp);
    }
}
void traversing()
{
    if(start==NULL)
    {
        cout<<"The Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = start;
        while(temp!=NULL)
        {
            cout<<temp->info<<" <- ";
            temp=temp->next;
        }
        cout<<"!!!"<<endl;
    }
}
void searching(int n)
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty"<<endl;
    }
    else
    {
        temp = start;
        while(temp!=NULL && n!=temp->info)
        {
            temp = temp->next;
        }
        if(temp==NULL)
        {
            cout<<"Item "<<n<<" not Found in the Linked List!..."<<endl;
        }
        else
        {
            cout<<"Item "<<n<<" Found in the Linked List!..."<<endl;
        }
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
    int item,a;
    char ch = 'y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"Ordered Linked List and Various Operations!..."<<endl;
        cout<<"Enter your Choice : "<<endl;
        cout<<" 1. Insertion in the Linked List"<<endl;
        cout<<" 2. Deletion in the Linked List"<<endl;
        cout<<" 3. Searching in the Linked List"<<endl;
        cout<<" 4. Traversing in the Linked List"<<endl;
        cout<<" 5. Exit"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
            cout<<"Insertion in the Ordered Linked List!..."<<endl;
            cout<<"Enter the Item to be Inserted : ";
            cin>>item;
            newptr = create_new_node(item);
            insertion(newptr);
            cout<<"The Linked List is : "<<endl;
            traversing();
            break;

        case 2:
            cout<<"Deletion in the Linked List!..."<<endl;
            cout<<"Enter the Item to be Deleted : ";
            cin>>item;
            deletion(item);
            cout<<"The Linked List is : "<<endl;
            traversing();
            break;

        case 3:
            cout<<"Searching in the Linked List!..."<<endl;
            cout<<"Enter the Item to be Searched : ";
            cin>>item;
            searching(item);
            cout<<"The Linked List is : "<<endl;
            traversing();
            break;

        case 4:
            cout<<"Traversing of the Linked List : "<<endl;
            traversing();
            break;

        case 5:
            delete_ll();
            exit(1);

        default:
            cout<<"You Entered a Wrong Choice!..."<<endl;
        }
    }
    return 0;
}
