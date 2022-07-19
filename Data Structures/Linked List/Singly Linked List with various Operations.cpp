#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct nodetype
{
    int info;
    struct nodetype *link;
};
typedef struct nodetype* node;
node start = NULL;
node getnode()
{
    node p;
    p = (node)malloc(sizeof(struct nodetype));
    return (p);
}
void freenode(node p)
{
    free(p);
}
void traverse()
{
    node temp = start;
    while(temp!=NULL)
    {
        cout<<" "<<temp->info<<"<-";
        temp = temp->link;
    }
    cout<<endl;
}
node insert_beg(int item)
{
    node new1;
    new1 = getnode();
    new1->info = item;
    new1->link = NULL;
    if (start==NULL)
    {
        start = new1;
    }
    else
    {
        new1->link = start;
        start = new1;
    }
    return(start);
}
void insert_end(int item)
{
    node new1,temp;
    new1 = getnode();
    new1->info = item;
    new1->link = NULL;
    if(start==NULL)
    {
        start = new1;
    }
    else
    {
        temp = start;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new1;
    }
}
node delete_beg()
{
    node temp = start;
    cout<<"The Number Deleted is : "<<temp->info;
    start = start->link;
    freenode(temp);
    return (start);
}
void delete_end()
{
    node pred,temp;
    pred = NULL;
    temp = start;
    while(temp->link!=NULL)
    {
        pred = temp;
        temp = temp->link;
    }
    cout<<"\n The Number Deleted is : "<<temp->info<<endl;
    pred->link = NULL;
    freenode(temp);
}
int main()
{
    int item,a;
    char ch;
    do{
        cout<<"Enter your Choice : - "<<endl;
        cout<<"\n\t1. Traversing "<<endl;
        cout<<"\n\t2. Insertion at the Beginning "<<endl;
        cout<<"\n\t3. Insertion at the End "<<endl;
        cout<<"\n\t4. Deletion at the Beginning "<<endl;
        cout<<"\n\t5. Deletion at the End \n=> "<<endl;
        cin>>a;
        switch(a)
        {
            case 1: traverse();
            break;

            case 2: cout<<"Enter the Number to be Inserted in the Beginning : ";
            cin>>item;
            start = insert_beg(item);
            break;

            case 3:cout<<"Enter the Number to be Inserted in the Beginning : ";
            cin>>item;
            insert_end(item);
            break;

            case 4:start = delete_beg();
            break;

            case 5:delete_end();
            break;

            default: cout<<"\nWrong Choice Entered!..."<<endl;
        }
        cout<<"Do you want to Continue[Y/N]...";
        cin>>ch;
    }
    while(ch!='n');
    return 0;

}
