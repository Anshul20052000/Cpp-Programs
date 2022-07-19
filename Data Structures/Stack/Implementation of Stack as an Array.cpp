#include<iostream>
using namespace std;
int Stack[10],top=-1,item,Max;
void push(/*int item,int Max,int Stack[],int top*/)
{
    if(top==Max-1)
    {
        cout<<"Stack OVERFLOW!..."<<endl;
    }
    else
    {
        top++;
        Stack[top] = item;
    }
}
void peep(/*int Stack[],int top*/)
{
    if(top==-1)
    {
        cout<<"Stack is Empty!..."<<endl;
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            cout<<Stack[i]<<" <- ";
        }
        cout<<"TOP"<<endl;
    }

}
void pop(/*int Stack[],int top*/)
{
    if(top==-1)
    {
        cout<<"Stack UNDERFLOW!..."<<endl;
    }
    else
    {
        int a;
        a = Stack[top];
        top--;
        cout<<a<<" Deleted from Stack..."<<endl;
    }
}
int main()
{
    int a;
    cout<<"Implementation of Stack using Array!..."<<endl;
    cout<<"Enter how many Elements you want to take into Consideration : ";
    cin>>Max;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter your Choice : "<<endl;
        cout<<" 1. PUSH"<<endl;
        cout<<" 2. POP"<<endl;
        cout<<" 3. PEEP"<<endl;
        cout<<" 4. EXIT"<<endl;
        cin>>a;
        cout<<endl;
        switch(a)
        {
        case 1 :
             cout<<"Pushing in the Stack!..."<<endl;
             cout<<"Enter the Element to be Inserted : ";
             cin>>item;
             push(/*item,Max,Stack,top*/);
             cout<<"Now the Stack is : "<<endl;
             peep(/*Stack,top*/);
             break;

        case 2:
            cout<<"Popping in the Stack!..."<<endl;
            pop(/*Stack,top*/);
            cout<<"Now the Stack is : "<<endl;
            peep(/*Stack,top*/);
            break;

        case 3:
            cout<<"Peeping in the Stack!..."<<endl;
            peep(/*Stack,top*/);
            break;

        case 4:
            exit(1);

        default:
            cout<<"Wrong Choice!...Please Try Again..."<<endl;
        }
        cout<<"Do you want to do more Operations!...[Y/N] : ";
        cin>>ch;
    }
    return 0;
}
