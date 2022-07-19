#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
    const int Size = 10;
    int position;
    position = Size/2;
    char ch;
    cout<<"### Race the Drunken Man from Start to Finish Line ###"<<endl;
    cout<<"\n Enter a Character of your Choice : ";
    cin>>ch;
    while(1)
    {
        cout<<" ||START||";
        for(int i=0;i<Size;i++)
        {
            if(i == position)
            {
                cout<<ch;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"||FINISH||"<<endl;
        int flag;
        flag = (rand()%3) - 1;
        position = position + flag;
        if(position<1)
        {
            cout<<"\n You could not Finish the Race...Sorry"<<endl;
            break;
        }
        if(position>=Size)
        {
            cout<<"\n Yay! You Finished the Race..."<<endl;
            break;
        }
    }
    return 0;
}
