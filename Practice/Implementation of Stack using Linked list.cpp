#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*top,*newptr,*temp;
node *create_new_node(int n)
{
    node *np;
    np = new node;
    np->info = n;
    np->next = NULL;
    return(np);
}
void Push(node *p)
{
    if(top == NULL)
    {
        top = p;
    }
    else
    {
        p->next = top;
        top = p;
    }

}
void Pop()
{
    if(top==NULL)
    {
        cout<<"Stack Underflow!...Stack is Already Empty"<<endl;
    }
    else
    {
        temp = top;
        top = top->next;
        cout<<temp->info<<" Popped from the Stack "<<endl;
        delete(temp);
    }
}
void Peep()
{
    if(top==NULL)
    {
        cout<<"Stack is Empty!...so no Top Element"<<endl;
    }
    else
    {
        cout<<"Top Element : "<<top->info<<endl;
    }
}
void Traverse()
{
    if(top==NULL)
    {
        cout<<"Stack is Empty!..."<<endl;
    }
    else
    {
        temp = top;
        while(temp!=NULL)
        {
            cout<<temp->info<<" <- ";
            temp = temp->next;
        }
        cout<<"!!!"<<endl;
    }
}
void Delete_Stack()
{
    if(top == NULL)
    {
        cout<<"Stack is Already Empty!..."<<endl;
    }
    else
    {
        while(top != NULL)
        {
            temp = top;
            cout<<temp->info<<" Deleted from Stack..."<<endl;
            top = top->next;
            delete(temp);
        }
        cout<<"Wiped Out..."<<endl;
    }
}
int main()
{
    int cho,item;
    top = NULL;
    char ch = 'y';
    x:
    while(ch=='y'||ch=='Y')
    {
        cout<<"Stack and its Various Operations :"<<endl;
        cout<<" 1. PUSH "<<endl;
        cout<<" 2. POP "<<endl;
        cout<<" 3. PEEP "<<endl;
        cout<<" 4. Traverse "<<endl;
        cout<<" 5. Wipe Out Entire Stack "<<endl;
        cout<<"Enter your Choice : ";
        cin>>cho;
        switch(cho)
        {
        case 1 :
            cout<<"PUSH Operation"<<endl;
            cout<<"Enter the Element to be Pushed in the Stack : ";
            cin>>item;
            newptr = create_new_node(item);
            Push(newptr);
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

        case 5 :
            cout<<"Wipe Out Entire Stack : "<<endl;
            Delete_Stack();
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
    Delete_Stack();
    return 0;
}
