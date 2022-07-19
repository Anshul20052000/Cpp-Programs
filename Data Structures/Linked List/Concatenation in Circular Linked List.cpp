#include<iostream>
using namespace std;
struct node
{
    int info;
    node *link;
}*start1,*start2,*newptr,*temp;
node* create_new_node()
{
    node *ptr;
    ptr = new node;
    return(ptr);
}
void traverse(node *start)
{
    if(start==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
        return;
    }
    temp = start;
    while(temp->link!=start)
    {
        cout<<" "<<temp->info<<" <-";
        temp = temp->link;
    }
    cout<<" "<<temp->info<<" <-";
    cout<<" !!!"<<endl;
}
node *insert_beg(int n,node *start,node *p)
{
    p->info = n;
    if(start==NULL)
    {
        start = p;
        p->link = start;
        return(start);
    }
    else
    {
        temp = start;
        while(temp->link!=start)
        {
            temp = temp->link;
        }
        temp->link = p;
        p->link = start;
        start = p;
        return(start);
    }
}
node *concatenation(node *s1,node *s2)
{
    temp = s1;
    while(temp->link!=s1)
    {
        temp = temp->link;
    }
    temp->link = s2;
    temp = s2;
    while(temp->link!=s2)
    {
        temp = temp->link;
    }
    temp->link = s1;
    return(s1);
}
void delete_ll(node *start)
{
    if(start==NULL)
    {
        cout<<"LL is Already Empty!..."<<endl;
        exit(1);
    }
    temp = start;
    while(temp->link!=start)
    {
        temp = temp->link;
    }
    temp->link = NULL;
    while(start!=NULL)
    {
        temp = start;
        start = start->link;
        cout<<temp->info<<" Deleted..."<<endl;
        delete(temp);
    }
}
int main()
{
    int item;
    char ch='y';
    start1 = NULL;
    start2 = NULL;
    cout<<"Enter the First CLL : "<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted :";
        cin>>item;
        newptr = create_new_node();
        start1 = insert_beg(item,start1,newptr);
        traverse(start1);
        cout<<"Want to Insert more Elements in the CLL...[Y/N] : ";
        cin>>ch;
    }
    cout<<"Enter the Second CLL : "<<endl;
    ch = 'y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted :";
        cin>>item;
        newptr = create_new_node();
        start2 = insert_beg(item,start2,newptr);
        traverse(start2);
        cout<<"Want to Insert more Elements in the CLL...[Y/N] : ";
        cin>>ch;
    }
    cout<<"The First CLL is : "<<endl;
    traverse(start1);
    cout<<endl;
    cout<<"The Second CLL is : "<<endl;
    traverse(start2);
    cout<<endl;
    node *start3;
    start3 = concatenation(start1,start2);
    cout<<"The Linked List After Concatenation : "<<endl;
    traverse(start3);
    delete_ll(start3);
}
