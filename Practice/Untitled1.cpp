#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*start,*newptr,*temp,*loc;
node *create_new_node(int n)
{
    node *ptr;
    ptr = new node;
    ptr->info = n;
    ptr->next = NULL;
    return(ptr);
}
void Traversing()
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
node *Searching(int n)
{
    if(start == NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = start;
        while(temp!=NULL)
        {
            if(temp->info == n)
            {
                return (temp);
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    return(NULL);
}
void Insert_middle(node *p,int flag)
{
    if(start == NULL)
    {
        start = p;
    }
    else
    {
        loc = Searching(flag);
        if(loc == NULL)
        {
            cout<<flag<<" not Found in the Linked List "<<endl;
            return;
        }
        else
        {
            p->next = loc->next;
            loc->next = p;
        }

    }
}
void Delete_middle(int n)
{
    if(start == NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        node *pred;
        pred = NULL;
        temp = start;
        while(temp!=NULL && temp->info!=n)
        {
            pred = temp;
            temp = temp->next;
        }
        if(pred == NULL)
        {
            start = start->next;
        }
        else if(temp == NULL)
        {
            cout<<"Element not Found in the Linked List!..."<<endl;
            return;
            return;
        }
        else
        {
            pred->next = temp->next;
        }
        cout<<temp->info<<" Deleted from Linked List!..."<<endl;
        delete(temp);
    }
}
void Delete_ll()
{
    if(start == NULL)
    {
        cout<<"Linked List is Already Empty!..."<<endl;
    }
    else
    {
        while(start!=NULL)
        {
            temp = start;
            start = start->next;
            cout<<temp->info<<" Deleted from LL..."<<endl;
            delete(temp);
        }
        cout<<"Entire LL Deleted!..."<<endl;
    }
}
int main()
{
    start = NULL;
    cout<<"Ordered Linked List and its Various Operations!..."<<endl;
    int choice,item,flag;
    char ch = 'y';
    while (ch=='y'||ch=='Y')
    {
        cout<<endl;
        cout<<"Enter your Choice : "<<endl;
        cout<<" 1. Traversing "<<endl;
        cout<<" 2. Searching "<<endl;
        cout<<" 3. Insertion "<<endl;
        cout<<" 4. Deletion of a Particular Item "<<endl;
        cout<<" 5. Delete Entire Linked List "<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1 :
            cout<<"Traversing Operation "<<endl;
            cout<<"The Linked List is : "<<endl;
            Traversing();
            break;

        case 2 :
            cout<<"Searching Operation "<<endl;
            cout<<"Enter the Item to be Searched : ";
            cin>>item;
            loc = Searching(item);
            if(loc==NULL)
            {
                cout<<item<<" not Found in the Linked List "<<endl;
            }
            else
            {
                cout<<loc->info<<" Found in the Linked List "<<endl;
            }
            break;

        case 3 :
            cout<<"Insertion "<<endl;
            cout<<"Enter the Item to be Inserted : ";
            cin>>item;
            cout<<"Enter the Info part of the Node after which you want to Insert the Item : ";
            cin>>flag;
            newptr = create_new_node(item);
            Insert_middle(newptr,flag);
            //cout<<"The Linked List is : "<<endl;
            //Traversing();
            break;

        case 4 :
            cout<<"Deletion of a Particular Item "<<endl;
            cout<<"Enter the Item to be Deleted : ";
            cin>>item;
            Delete_middle(item);
            break;

        case 5 :
            cout<<"Deletion of the Entire Linked List "<<endl;
            Delete_ll();
            break;

        default :
            cout<<"Wrong Choice Entered!...Try Again"<<endl;
        }
        cout<<"Want to Try Another Operation...[Y/N] : ";
        cin>>ch;
    }
    Delete_ll();
    return 0;
}
