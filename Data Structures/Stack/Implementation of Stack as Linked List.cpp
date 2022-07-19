#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*top,*newptr,*temp,*ptr;
node *create_new_node(int n)
{
    ptr = new node;
    ptr->info = n;
    ptr->next = NULL;
    return(ptr);
}
void push(node *np)
{
    if(top==NULL)
    {
        top = np;
        np->next = NULL;
    }
    else
    {
        np->next = top;
        top = np;
    }
}
void pop()
{
    if(top==NULL)
    {
        cout<<"STACK UNDERFLOW!..."<<endl;
    }
    else
    {
        temp = top;
        top = top->next;
        cout<<temp->info<<" Deleted from Stack!..."<<endl;
        delete(temp);
    }
}
void peep()
{
    if(top==NULL)
    {
        cout<<"Stack is Empty!..."<<endl;
    }
    else
    {
        temp = top;
        cout<<"TOP";
        while(temp!=NULL)
        {
            cout<<" -> "<<temp->info;
            temp = temp->next;
        }
        cout<<endl;
    }
}
void delete_stack()
{
    if(top==NULL)
    {
        cout<<"Stack is Already Empty!..."<<endl;
    }
    else
    {
        while(top!=NULL)
        {
            temp = top;
            top = top->next;
            cout<<temp->info<<" Deleted!..."<<endl;
            delete(temp);
        }
    }
}
int main()
{
    top = NULL;
    int item,a;
    cout<<"Implementation of Stack using Linked List!..."<<endl;
    char ch = 'y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter your Choice : "<<endl;
        cout<<" 1. PUSH "<<endl;
        cout<<" 2. POP "<<endl;
        cout<<" 3. PEEP "<<endl;
        cout<<" 4. EXIT "<<endl;
        cin>>a;
        switch(a)
        {
            case 1 :
                 cout<<"Pushing in the Stack!..."<<endl;
                 cout<<"Enter the Element to be Inserted : ";
                 cin>>item;
                 newptr = create_new_node(item);
                 push(newptr);
                 cout<<"Now the Stack is : "<<endl;
                 peep();
                 break;

            case 2:
                cout<<"Popping in the Stack!..."<<endl;
                pop();
                cout<<"Now the Stack is : "<<endl;
                peep();
                break;

            case 3:
                cout<<"Peeping in the Stack!..."<<endl;
                peep();
                break;

            case 4:
                delete_stack();
                exit(1);

            default:
                cout<<"Wrong Choice!...Please Try Again..."<<endl;
        }
        cout<<"Do you want to do more Operations!...[Y/N] : ";
        cin>>ch;
    }
    delete_stack();
    return 0;
}
