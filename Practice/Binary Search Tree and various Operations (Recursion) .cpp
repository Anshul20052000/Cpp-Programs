#include<iostream>
using namespace std;
struct node
{
    int info;
    node *left,*right;
}*root,*par,*temp,*loc;
node* BST_Insertion(node *r,int item)
{
    if(r == NULL)
    {
        r = new node;
        r->info = item;
        r->left = r->right = NULL;
    }
    else if(item < (r->info))
    {
        r->left = BST_Insertion(r->left,item);
    }
    else
    {
        r->right = BST_Insertion(r->right,item);
    }
    return(r);
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
node *BST_Searching(node *r,int item)
{
    if((r == NULL) || (r->info == item))
    {
        return r;
    }
    if(item < r->info)
    {
        return BST_Searching(r->left,item);
    }
    else
    {
        return BST_Searching(r->right,item);
    }
}
void Inorder_Traversal(node *r)
{
    if(r==NULL)
    {
        return;
    }
    Inorder_Traversal(r->left);
    cout<<r->info<<" ";
    Inorder_Traversal(r->right);
}
void Preorder_Traversal(node *r)
{
    if(r==NULL)
    {
        return;
    }
    cout<<r->info<<" ";
    Preorder_Traversal(r->left);
    Preorder_Traversal(r->right);
}
void Postorder_Traversal(node *r)
{
    if(r==NULL)
    {
        return;
    }
    Postorder_Traversal(r->left);
    Postorder_Traversal(r->right);
    cout<<r->info<<" ";
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
        cout<<" 4. Inorder Traversal "<<endl;
        cout<<" 5. Preorder Traversal "<<endl;
        cout<<" 6. Postorder Traversal "<<endl;
        cout<<" Enter your Choice : ";
        cin>>cho;
        switch(cho)
        {
        case 1 :
            cout<<"Insertion in BST"<<endl;
            cout<<"Enter the Element to be Inserted : ";
            cin>>item;
            root = BST_Insertion(root,item);
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
            temp = BST_Searching(root,item);
            if(temp == NULL)
            {
                cout<<item<<" not Found in the BST..."<<endl;
            }
            else
            {
                cout<<temp->info<<" Found in the BST..."<<endl;
            }
            break;

        case 4 :
            cout<<"Inorder Traversal of BST "<<endl;
            Inorder_Traversal(root);
            cout<<endl;
            break;

        case 5 :
            cout<<"Preorder Traversal of BST "<<endl;
            Preorder_Traversal(root);
            cout<<endl;
            break;

        case 6 :
            cout<<"Postorder Traversal of BST "<<endl;
            Postorder_Traversal(root);
            cout<<endl;
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
