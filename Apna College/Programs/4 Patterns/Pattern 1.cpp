/* *****
   *****
   *****
   *****
   ***** */

#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"O";
        }
        cout<<endl;
    }
    return 0;
}
