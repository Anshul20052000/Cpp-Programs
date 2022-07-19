#include<iostream>
using namespace std;
int Queue[20],item,Front,Rear,Size;
void Insertion(int n)
{
    if(Front == (Rear+1)%Size)
    {
        cout<<"Queue Overflow!..."<<endl;
    }
    else
    {
        if(Front==-1)
        {
            Front=Rear=0;
        }
        else
        {
            Rear = (Rear+1)%Size;
        }
        Queue[Rear] = n;
        cout<<"Item Inserted Successfully!..."<<endl;
    }
}
void Deletion()
{
    if(Front==-1)
    {
        cout<<"Queue Underflow!..."<<endl;
    }
    else
    {
        item = Queue[Front];
        if(Rear==Front)
        {
            Rear = Front = -1;
        }
        else
        {
            Front = (Front+1)%Size;
        }
        cout<<item<<" Deleted from Queue..."<<endl;
    }
}
void Traverse()
{
    if(Front==-1)
    {
        cout<<"Queue is Empty!..."<<endl;
    }
    else
    {
        int i;
        for(i=Front;i!=Rear;i=(i+1)%Size)
        {
            cout<<Queue[i]<<" <- ";
        }
        cout<<Queue[i]<<" <- !!!"<<endl;
    }
}
int main()
{
    Front = Rear = -1;
    int cho;
    char ch = 'y';
    cout<<"Implementation of Queue using Array"<<endl;
    cout<<"Enter the Size of the Array : ";
    cin>>Size;
    x:
    while(ch=='y'||ch=='Y')
    {
        cout<<" Operations : "<<endl;
        cout<<" 1. Insertion "<<endl;
        cout<<" 2. Deletion "<<endl;
        cout<<" 3. Traverse "<<endl;
        cout<<"Enter your Choice : ";
        cin>>cho;
        switch(cho)
        {
        case 1 :
            cout<<"Insertion Operation : "<<endl;
            cout<<"Enter the Element to be Inserted in the Queue : ";
            cin>>item;
            Insertion(item);
            break;

        case 2 :
            cout<<"Deletion Operation : "<<endl;
            Deletion();
            break;

        case 3 :
            cout<<"Traverse Operation : "<<endl;
            Traverse();
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
    return 0;
}
