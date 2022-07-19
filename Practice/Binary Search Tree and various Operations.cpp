#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left,*right;
}*root,*newptr,*par,*temp,*loc;
node *create_new_node(int n)
{
    node *ptr;
    ptr = new node;
    ptr->info = n;
    ptr->left = NULL;
    ptr->right = NULL;
    return(ptr);
}
void BST_Insertion(node *p)
{
    par = NULL;
    temp = root;
    while(temp!=NULL)
    {
        par = temp;
        if(p->info < temp->info)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    if(par == NULL)
    {
        root = p;
    }
    else if(p->info < par->info)
    {
        par->left = p;
    }
    else
    {
        par->right = p;
    }
}
void BST_Deletion(int n)
{
    par = NULL;
    loc = root;
    while((loc != NULL)&&(loc->info != n))
    {
        par = loc;
        if(n < loc->info)
        {
            loc = loc->left;
        }
        else
        {
            loc = loc->right;
        }
    }
    if(loc==NULL)
    {
        cout<<"Item "<<n<<" not Found in the BST"<<endl;
    }
    else
    {
        if((loc->left==NULL)&&(loc->right==NULL))
        {
            if((loc->info)<(par->info))
            {
                par->left = NULL;
            }
            else
            {
                par->right = NULL;
            }
        }
        else if((loc->left!=NULL)&&(loc->right==NULL))
        {
            if((loc->info)<(par->info))
            {
                par->left = loc->left;
            }
            else
            {
                par->right = loc->left;
            }
        }
        else if((loc->left==NULL)&&(loc->right!=NULL))
        {
            if((loc->info)<(par->info))
            {
                par->left = loc->right;
            }
            else
            {
                par->right = loc->right;
            }
        }
        else if((loc->left!=NULL)&&(loc->right!=NULL))
        {
            node *partemp = NULL;
            temp = loc->right;
            partemp = loc;
            while(temp->left!=NULL)
            {
                partemp = temp;
                temp = temp->left;
            }
            loc->info = temp->info;
            if(loc == partemp)
            {
                loc->right = temp->right;
            }
            else
            {
                partemp->left = temp->right;
            }
            loc = temp;
        }
        cout<<loc->info<<" Deleted from the BST..."<<endl;
        free(loc);
    }
}
void BST_Searching(int n)
{
    temp = root;
    while((temp!=NULL)&&(temp->info!=n))
    {
        if(n < (temp->info))
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    if(temp==NULL)
    {
        cout<<n<<" not Found in the BST..."<<endl;
    }
    else
    {
        cout<<n<<" Found in the BST..."<<endl;
    }
}
void Delete_BST(node *nd)
{
    if(nd == NULL)
    {
        return ;
    }
    Delete_BST(nd->left);
    Delete_BST(nd->right);
    cout<<nd->info<<" Deleted from the BST..."<<endl;
    delete(nd);
}
int main()
{
    int cho,item;
    root = NULL;
    cout<<"Binary Search Tree and its various Operations"<<endl;
    char ch = 'y';
    x:
    while(ch=='y'||ch=='y')
    {
        cout<<" 1. Insertion "<<endl;
        cout<<" 2. Deletion "<<endl;
        cout<<" 3. Searching "<<endl;
        cout<<" Enter your Choice : ";
        cin>>cho;
        switch(cho)
        {
        case 1 :
            cout<<"Insertion in BST"<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            newptr = create_new_node(item);
            BST_Insertion(newptr);
            break;

        case 2 :
            cout<<"Deletion in BST"<<endl;
            cout<<"Enter the Element to be Deleted : ";
            cin>>item;
            BST_Deletion(item);
            break;

        case 3 :
            cout<<"Searching in BST"<<endl;
            cout<<"Enter the Item to be Searched : ";
            cin>>item;
            BST_Searching(item);
            break;

        default:
            cout<<"Wrong Choice Entered!...Try Again..."<<endl;
        }
        cout<<"Want to Try another Operation[Y/N] : ";
        cin>>ch;
        cout<<endl;
    }
    cout<<"Do you Really Want to Exit [Y/N] : ";
    cin>>ch;
    if(ch=='n'|ch=='N')
    {
        ch = 'y';
        goto x;
    }
    Delete_BST(root);
    return 0;
}
