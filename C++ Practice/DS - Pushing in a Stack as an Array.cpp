#include<iostream>
using namespace std;
const int Size=10;
int Push(int Stack[],int &Top,int Item)
{
    if(Top==Size-1)
    {
        return (-1);
    }
    else
    {
        Top++;
        Stack[Top]=Item;
    }
    return (0);
}
void Display(int Stack[],int Top)
{
    cout<<Stack[Top]<<" <-- "<<endl;
    for(int i=Top-1;i>=0;i--)
    {
        cout<<Stack[i]<<endl;
    }
}
int main()
{
    int Stack[Size],item,res,top=-1;
    char ch='y';
    cout<<"Implementation of Stack as an Array!..."<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Item which is to be Inserted at the Top of the Stack : ";
        cin>>item;
        res=Push(Stack,top,item);
        if(res==-1)
        {
            cout<<"OVERFLOW!..."<<endl;
            exit(1);
        }
        cout<<"Item Inserted at the Top of the Stack..."<<endl;
        cout<<"Now the Stack is : "<<endl;
        Display(Stack,top);
        cout<<"Want to Insert more Items...[Y/N]..."<<endl;
        cin>>ch;
    }
    return 0;
}
