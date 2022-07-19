#include<iostream>
using namespace std;
/*void Insertion(int &Arr,int Item,int Pos,int &N)
{
    for(int i=N;i>=Pos;i--)
    {
        Arr[i+1] = Arr[i];
    }
    Arr[Pos] = Item;
    N++;
}
void Traverse(int &Arr,int &N)
{
    for(int i=0;i<N;i++)
    {
        cout<<i+1<<" => "<<Arr[i]<<endl;
    }
}
*/
int main()
{
    int n,arr[20];
    char ch='y';
    cout<<"Enter the Length of the Array (<20) : ";
    cin>>n;
    while(n>20)
    {
        cout<<"Length of the Array is Greater than 20...Error"<<endl;
        cout<<"Enter the Length of the Array Again : ";
        cin>>n;

    }
    cout<<"Enter the Elements in the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Arr["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"The Elements you Entered in the Array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<" => "<<arr[i]<<endl;
    }
    while(ch=='y'||ch=='Y')
    {
        cout<<"Which Operation you want to Perform : "<<endl;
        cout<<" 1. Insertion "<<endl;
        cout<<" 2. Deletion "<<endl;
        cout<<" 3. Traversing "<<endl;
        int temp;
        cin>>temp;
        switch(temp)
        {
            case 1 :
                int pos,item;
                cout<<"Enter the Item which you want to Insert : ";
                cin>>item;
                cout<<"Enter the Position at which you want to Insert the Item : ";
                cin>>pos;
                while(pos>n||pos<1)
                {
                    cout<<"Position Entered is Wrong...Renter the Position..."<<endl;
                    cout<<"Enter the Position at which you want to Insert the Item : ";
                    cin>>pos;
                }
                //Insertion(arr,item,pos,n);
                for(int i=n;i>=pos;i--)
                {
                    arr[i] = arr[i-1];
                }
                arr[pos-1] = item;
                n++;
                break;

            case 2 :
                int Pos,Item;
                cout<<"Enter the Position of the Element which you want to Delete : ";
                cin>>Pos;
                Item = arr[Pos-1];
                for(int i=Pos-1;i<n-1;i++)
                {
                    arr[i] = arr[i+1];
                }
                n--;
                cout<<Item<<" Deleted from the Array..."<<endl;
                break;

            case 3 :
                cout<<"Traversing of the Array : "<<endl;
                //Traverse(arr,n);
                for(int i=0;i<n;i++)
                {
                    cout<<i+1<<" => "<<arr[i]<<endl;
                }
                break;

            default :
                cout<<"Wrong Choice Entered"<<endl;
        }
        cout<<"Want to Try any other Operations[Y/N] : ";
        cin>>ch;
    }
    return 0;
}
