#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*Front,*Rear,*newptr,*temp;
void Insertion(int n)
{
    node *ptr;
    ptr = new node;
    ptr->next = NULL;
    ptr->info = n;
    if(ptr==NULL)
    {
        cout<<"Queue Overflow!..."<<endl;
    }
    else
    {
        if(Front==NULL)
        {
            Front = Rear = ptr;
        }
        else
        {
            Rear->next = ptr;
            Rear = ptr;
        }
    }
}
void Deletion()
{
    if(Front==NULL)
    {
        cout<<"Queue Underflow!..."<<endl;
    }
    else
    {
        temp = Front;
        if(Rear==Front)
        {
            Rear = Front = NULL;
        }
        else
        {
            Front = Front->next;
        }
        cout<<temp->info<<" Deleted from Queue..."<<endl;
        delete(temp);
    }
}
void Traverse()
{
    if(Front==NULL)
    {
        cout<<"Queue is Empty!..."<<endl;
    }
    else
    {
        temp = Front;
        while(temp!=NULL)
        {
            cout<<temp->info<<" <- ";
            temp = temp->next;
        }
        cout<<"!!!"<<endl;
    }
}
void Delete_Queue()
{
    if(Front == NULL)
    {
        cout<<"Queue is Already Empty!..."<<endl;
    }
    else
    {
        while(Front!=NULL)
        {
            temp = Front;
            Front = Front->next;
            cout<<temp->info<<" Deleted..."<<endl;
            delete(temp);
        }
        cout<<"..."<<endl;
        cout<<"Wiped Out..."<<endl;
    }
}
int main()
{
    Front = Rear = NULL;
    int cho,item;
    char ch = 'y';
    cout<<"Implementation of Queue using Array"<<endl;
    x:
    while(ch=='y'||ch=='Y')
    {
        cout<<" Operations : "<<endl;
        cout<<" 1. Insertion "<<endl;
        cout<<" 2. Deletion "<<endl;
        cout<<" 3. Traverse "<<endl;
        cout<<" 4. Delete Entire Queue "<<endl;
        cout<<"Enter your Choice : ";
        cin>>cho;
        switch(cho)
        {
        case 1 :
            cout<<"Insertion Operation : "<<endl;
            cout<<"Enter the Element to be Inserted in the Queue : ";
            cin>>item;
            Insertion(item);
            cout<<"Item Inserted Successfully!..."<<endl;
            break;

        case 2 :
            cout<<"Deletion Operation : "<<endl;
            Deletion();
            break;

        case 3 :
            cout<<"Traverse Operation : "<<endl;
            Traverse();
            break;

        case 4 :
            cout<<"Delete Entire Queue : "<<endl;
            Delete_Queue();
            break;

        default :
            cout<<"Wrong Choice Entered...Try Again!..."<<endl;

        }
        cout<<"Want to Try Another Operation [Y/N] : ";
        cin>>ch;
    }
    cout<<"Do you Really want to Quit [Y/N] : ";
    cin>>ch;
    if(ch=='n'||ch=='N')
    {
        ch = 'y';
        goto x;
    }
    Delete_Queue();
    return 0;
}
