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
void Insert_beg(node *p)
{
    if(start == NULL)
    {
        start = p;
    }
    else
    {
        p->next = start;
        start = p;
    }
}
void Insert_end(node *p)
{
    if(start == NULL)
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
void Delete_beg()
{
    if(start == NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = start;
        start = start->next;
        cout<<temp->info<<" Deleted from Linked List!..."<<endl;
        delete(temp);
    }
}
void Delete_end()
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
        while(temp->next!=NULL)
        {
            pred = temp;
            temp = temp->next;
        }
        pred->next = NULL;
        cout<<temp->info<<" Deleted from Linked List!..."<<endl;
        delete(temp);
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
        cout<<"Insertion : "<<endl;
        cout<<" 3. Insertion in the Beginning "<<endl;
        cout<<" 4. Insertion in the End "<<endl;
        cout<<" 5. Insertion after a Given Node "<<endl;
        cout<<"Deletion : "<<endl;
        cout<<" 6. Deletion in the Beginning "<<endl;
        cout<<" 7. Deletion in the End "<<endl;
        cout<<" 8. Deletion of a Particular Item "<<endl;
        cout<<" 9. Delete Entire Linked List "<<endl;
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
            cout<<"Insertion in the Beginning "<<endl;
            cout<<"Enter the Item to be Inserted : ";
            cin>>item;
            newptr = create_new_node(item);
            Insert_beg(newptr);
            //cout<<"The Linked List is : "<<endl;
            //Traversing();
            break;

        case 4 :
            cout<<"Insertion in the End "<<endl;
            cout<<"Enter the Item to be Inserted : ";
            cin>>item;
            newptr = create_new_node(item);
            Insert_end(newptr);
            //cout<<"The Linked List is : "<<endl;
            //Traversing();
            break;

        case 5 :
            cout<<"Insertion after a Given Node "<<endl;
            cout<<"Enter the Item to be Inserted : ";
            cin>>item;
            cout<<"Enter the Info part of the Node after which you want to Insert the Item : ";
            cin>>flag;
            newptr = create_new_node(item);
            Insert_middle(newptr,flag);
            //cout<<"The Linked List is : "<<endl;
            //Traversing();
            break;

        case 6 :
            cout<<"Deletion in the Beginning "<<endl;
            Delete_beg();
            break;

        case 7 :
            cout<<"Deletion in the End "<<endl;
            Delete_end();
            break;

        case 8 :
            cout<<"Deletion of a Particular Item "<<endl;
            cout<<"Enter the Item to be Deleted : ";
            cin>>item;
            Delete_middle(item);
            break;

        case 9 :
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
