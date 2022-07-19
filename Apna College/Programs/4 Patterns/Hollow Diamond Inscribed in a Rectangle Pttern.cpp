/*

    *
   * *
  *   *
 *     *
  *   *
   * *
    *

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<"*";
        }
        int space = (2*(i-1) + 1);
        for(int j=1;j<=space;j++)
        {
            if(j==1 || j==space)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<"*";
        }
        int space = (2*(i-1) + 1);
        for(int j=1;j<=space;j++)
        {
            if(j==1 || j==space)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
