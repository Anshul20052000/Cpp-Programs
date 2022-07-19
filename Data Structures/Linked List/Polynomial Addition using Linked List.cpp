#include<iostream>
using namespace std;
struct node
{
    int coeff,expo;
    node *next;
}*newptr,*ptr,*p,*q,*s,*t1,*t2,*t3,*temp;
node *create_new_node(int c,int e)
{
    ptr = new node;
    ptr->coeff = c;
    ptr->expo = e;
    ptr->next = NULL;
    return(ptr);
}
void insert_node(node *np,node *ll)
{
    temp = ll;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = np;
}
void traverse(node *ll)
{
    if(ll==NULL)
    {
        cout<<"Linked List is Empty!..."<<endl;
    }
    else
    {
        temp = ll;
        cout<<"Form is : [Coefficient,Exponent]"<<endl;
        while(temp!=NULL)
        {
            cout<<"["<<temp->coeff<<","<<temp->expo<<"]"<<" <- ";
            temp = temp->next;
        }
        cout<<"!!!"<<endl;
    }
}
node *polynomial_addition(node *p,node *q,node *s)
{
    t1 = p;
    t2 = q;
    t3 = s;
    while((t1!=NULL) && (t2!=NULL))
    {
        newptr = new node;
        if(t3 == NULL)
        {
            s = t3 = newptr;
        }
        else
        {
            t3->next = newptr;
            t3 = newptr;
        }

        if(t1->expo > t2->expo)
        {
            t3->coeff = t1->coeff;
            t3->expo = t1->expo;
            t1 = t1->next;
        }
        else if(t1->expo < t2->expo)
        {
            t3->coeff = t2->coeff;
            t3->expo = t2->expo;
            t2 = t2->next;
        }
        else
        {
            t3->coeff = t1->coeff + t2->coeff;
            t3->expo = t1->expo;
            t1 = t1->next;
            t2 = t2->next;
        }
    }

    while(t1!=NULL)
    {
        newptr = new node;
        newptr->coeff = t1->coeff;
        newptr->expo = t1->expo;
        t3->next = newptr;
        t3 = newptr;
        t1 = t1->next;
    }
    while(t2!=NULL)
    {
        newptr = new node;
        newptr->coeff = t2->coeff;
        newptr->expo = t2->expo;
        t3->next = newptr;
        t3 = newptr;
        t2 = t2->next;
    }
    t3->next = NULL;
    return(s);
}
void std_poly(node *ll)
{
    temp = ll;
    cout<<"[";
    while(temp!=NULL)
    {
        if(temp->expo==0)
        {
            cout<<temp->coeff;
        }
        else
        {
            cout<<"("<<temp->coeff<<")"<<"x^"<<temp->expo<<" + ";
        }
        temp = temp->next;
    }
    cout<<"]"<<endl;
}
void delete_ll(node *ll)
{
    if(ll==NULL)
    {
        cout<<"Linked List is Already Empty!..."<<endl;
    }
    else
    {
        while(ll!=NULL)
        {
            temp = ll;
            ll = ll->next;
            cout<<"["<<temp->coeff<<","<<temp->expo<<"]"<<" Deleted!..."<<endl;
            delete(temp);
        }
    }
}
int main()
{
    p = q = s = NULL;
    char ch='y';
    int ceo,exp,a=0;
    cout<<"Polynomial Addition!..."<<endl;
    cout<<"Enter the First Polynomial in Standard Form : "<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Coefficient : ";
        cin>>ceo;
        cout<<"Enter the Exponent : ";
        cin>>exp;
        newptr = create_new_node(ceo,exp);
        if(a==0)
        {
            p = newptr;
            a++;
        }
        else
        {
            insert_node(newptr,p);
        }
        cout<<"The Polynomial is : "<<endl;
        traverse(p);
        cout<<"Want to Insert more Terms in First Polynomial...[Y/N] : ";
        cin>>ch;
    }
    ch='y';
    a = 0;
    cout<<"\nEnter the Second Polynomial in Standard Form : "<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Coefficient : ";
        cin>>ceo;
        cout<<"Enter the Exponent : ";
        cin>>exp;
        newptr = create_new_node(ceo,exp);
        if(a==0)
        {
            q = newptr;
            a++;
        }
        else
        {
            insert_node(newptr,q);
        }
        cout<<"The Polynomial is : "<<endl;
        traverse(q);
        cout<<"Want to Insert more Terms in Second Polynomial...[Y/N] : ";
        cin>>ch;
    }
    cout<<"\nSo the Polynomials are : "<<endl;
    cout<<"\nFirst Polynomial (P) : "<<endl;
    traverse(p);
    cout<<"\nSecond Polynomial (Q) : "<<endl;
    traverse(q);

    //Till here Two Polynomials are Inserted.

    cout<<"\nNow the Addition of the Two Polynomials..."<<endl;
    s = polynomial_addition(p,q,s);
    cout<<"\nThe Resultant Polynomial (S) is : "<<endl;
    traverse(s);
    cout<<"\nPolynomials in Standard Form are : "<<endl;
    cout<<"First Polynomial (P) : ";
    std_poly(p);
    cout<<"\nSecond Polynomial (Q) : ";
    std_poly(q);
    cout<<"\nResultant Polynomial (S) : ";
    std_poly(s);
    cout<<endl;
    delete_ll(p);
    delete_ll(q);
    delete_ll(s);
    return 0;
}
