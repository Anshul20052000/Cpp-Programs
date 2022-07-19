#include<iostream>
using namespace std;
int Stack[20],top,item,cho;
void Push(int n)
{
    if(top==20)
    {
        cout<<"Stack Overflow!...Stack is Full so Item cannot be Inserted in the Stack"<<endl;
    }
    else
    {
        top++;
        Stack[top] = n;
    }
}
void Pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow!...Stack is Already Empty"<<endl;
    }
    else
    {
        item = Stack[top];
        cout<<item<<" Popped from the Stack "<<endl;
        top--;
    }
}
void Peep()
{
    if(top==-1)
    {
        cout<<"Stack is Empty!...so no Top Element"<<endl;
    }
    else
    {
        cout<<"Top Element : "<<Stack[top]<<endl;
    }
}
void Traverse()
{
    if(top==-1)
    {
        cout<<"Stack is Empty!..."<<endl;
    }
    else
    {
        int n = top;
        cout<<"The Stack is : "<<endl;
        for(int i=n;i>=0;i--)
        {
            cout<<Stack[i]<<" <- ";
        }
        cout<<" !!! "<<endl;
    }
}
int main()
{
    top = -1;
    char ch = 'y';
    x:
    while(ch=='y'||ch=='Y')
    {
        cout<<"Stack and its Various Operations :"<<endl;
        cout<<" 1. PUSH "<<endl;
        cout<<" 2. POP "<<endl;
        cout<<" 3. PEEP "<<endl;
        cout<<" 4. Traverse "<<endl;
        cout<<"Enter your Choice : ";
        cin>>cho;
        switch(cho)
        {
        case 1 :
            cout<<"PUSH Operation"<<endl;
            cout<<"Enter the Element to be Pushed in the Stack : ";
            cin>>item;
            Push(item);
            cout<<"Item Pushed Successfully"<<endl;
            break;

        case 2 :
            cout<<"POP Operation"<<endl;
            Pop();
            break;

        case 3 :
            cout<<"PEEP Operation"<<endl;
            Peep();
            break;

        case 4 :
            cout<<"Traverse Operation"<<endl;
            Traverse();
            break;

        default :
            cout<<"Wrong Choice Entered...Try Again!..."<<endl;
        }
        cout<<"Want to Try Another Operation[Y/N] : ";
        cin>>ch;
    }
    cout<<"Do you really want to Quit [Y/N] : ";
    cin>>ch;
    if(ch=='n'||ch=='N')
    {
        ch = 'y';
        goto x;
    }
    return 0;
}
