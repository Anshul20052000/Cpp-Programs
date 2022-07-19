#include<iostream>
using namespace std;
const int Size=50;
int push(int Stack[],int &Top,int Item)
{
    if(Top==Size-1)
    {
        return(-1);
    }
    else
    {
        Top++;
        Stack[Top]=Item;
        return 0;
    }
}
int Pop(int Stack[],int &Top)
{
    int temp;
    if(Top==-1)
    {
        return (-1);
    }
    else
    {
        temp=Stack[Top];
        Top--;
        return(temp);
    }
}
void Display(int Stack[],int Top)
{
    if(Top==-1)
    {
        cout<<"Stack is Empty!..."<<endl;
    }
    else
    {
        cout<<Stack[Top]<<" <-- "<<endl;
        for(int i=Top-1;i>=0;i--)
        {
            cout<<Stack[i]<<endl;
        }
    }
}
int main()
{
    int Stack[50],top=-1,res,item,del;
    char ch='y';
    cout<<"Implementation of Stack as an Array..."<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted at the Top of the Stack : ";
        cin>>item;
        res=push(Stack,top,item);
        cout<<"Element Inserted Successfully at the Top of the Stack..."<<endl;
        cout<<"Now the Stack is : "<<endl;
        Display(Stack,top);
        cout<<"Want to Insert More Elements in the Stack...[Y/N] "<<endl;
        cin>>ch;
    }
    cout<<"Now the Deletion of the Element Begins...."<<endl;
    cout<<"The Stack is : "<<endl;
    Display(Stack,top);
    cout<<"Want to Delete Element from the Stack!...[Y/N]..."<<endl;
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Element on the Top of the Stack will be Delete..."<<endl;
        del=Pop(Stack,top);
        if(del==-1)
        {
            cout<<"Stack UNDERFLOW!...Aborting..."<<endl;
            exit(1);
        }
        else
        {
            cout<<"The Element which is Deleted is : "<<del<<endl;
        }
        cout<<"Now the Stack is : "<<endl;
        Display(Stack,top);
        cout<<"Want to Delete more Elements from the Stack!..[Y/N]..."<<endl;
        cin>>ch;
    }
    return 0;
}
