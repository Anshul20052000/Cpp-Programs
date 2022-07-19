#include<iostream>
using namespace std;
struct Node
{
    int info;
    Node *next;
}*newptr,*ptr,*start,*temp,*rear;
Node *Create_New_Node(int n)
{
    ptr=new Node;
    ptr->info=n;
    ptr->next=NULL;
    return(ptr);
}
Node *Rear(Node *np)
{
    while(np->next!=NULL)
    {
        np=np->next;
    }
    return(np);
}
void Insert_Beg(Node *np)
{
    if(start==NULL)
    {
        start=np;
    }
    else
    {
        temp=start;
        start=np;
        np->next=temp;
    }
}
void Insert_End(Node *np)
{
    if(rear==NULL)
    {
        start=rear=np;
    }
    else
    {
        rear->next=np;
        rear=np;
    }
}
void Traverse(Node *np)
{
    if(np==NULL)
    {
        cout<<"Linked List is Empty..."<<endl;
    }
    while(np!=NULL)
    {
        cout<<np->info<<" -> ";
        np=np->next;
    }
    cout<<"!!!"<<endl;
}
void Delete(Node *tmp,long Item)
{
    Node *np=tmp,*prev,*Flag;
    while(np!=NULL&np->info!=Item)
    {
        prev=np;
        np=np->next;
    }
    if(np==NULL)
    {
        cout<<"Sorry!...The "<<Item<<" is not in the List..."<<endl;
        return ;
    }
    else
    {
        Flag=np;
        prev->next=np->next;
        cout<<Flag->info<<" is Deleted..."<<endl;
        delete Flag;
    }
}
int main()
{
    start=rear=NULL;
    int item,flag=-1;
    char ch='y';
    cout<<"Insertion in Linked List!..."<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Item to be Inserted : ";
        cin>>item;
        newptr=Create_New_Node(item);
        if(newptr!=NULL)
        {
            cout<<"New Node Created..."<<endl;
        }
        else
        {
            cout<<"Cannot Create New Node...Aborting..."<<endl;
            exit(1);
        }
        cout<<"Now Inserting New Node in the Linked List..."<<endl;
        xyz :
        cout<<"Where do you want to Insert the Node in the Linked List :\n\t1. Insertion in the Beginning of the List\n\t2. Insertion in the End of the List "<<endl;
        cout<<"Enter your Choice...[1/2] : ";
        cin>>flag;
        switch(flag)
        {
            case 1 : Insert_Beg(newptr);
            break;

            case 2 : rear=Rear(start);
            Insert_End(newptr);
            break;

            default : cout<<"Wrong Input..."<<endl;
            goto xyz;

        }
        cout<<"Node Inserted..."<<endl;
        cout<<"Now the Linked List is : "<<endl;
        Traverse(start);
        cout<<"Want to Insert more Nodes in the Linked List...[Y/N]...";
        cin>>ch;
    }
    cout<<"\nNow the Deletion Begins..."<<endl;
    cout<<"Now the List is : "<<endl;
    Traverse(start);
    long del;
    ch='Y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"Which Element do you want to Delete : "<<endl;
        cin>>del;
        Delete(start,del);
        cout<<"Now the List is : "<<endl;
        Traverse(start);
        cout<<"Do you want to Delete more Elements form the List...[Y/N]..."<<endl;
        cin>>ch;
    }
    return 0;
}
