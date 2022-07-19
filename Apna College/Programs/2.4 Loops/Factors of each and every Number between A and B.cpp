#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int minFac = 1000,maxFac = 0;
    int minFacNum,maxFacNum;
    int nofFac = 0;
    cout<<"The Factors are : "<<endl;
    for(int i=a;i<=b;i++)
    {
        nofFac = 0;
        cout<<i<<" => ";
        for(int j=1;j<=i/2;j++)
        {
            if(i%j == 0)
            {
                cout<<j<<"  ";
                nofFac++;
            }
        }
        if(nofFac >= maxFac)
        {
            maxFac = nofFac;
            maxFacNum = i;
        }
        if(nofFac <= minFac)
        {
            minFac = nofFac;
            minFacNum = i;
        }
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"Minimum Number of Factors are : "<<minFac<<" and is of "<<minFacNum<<endl;
    cout<<"Maximum Number of Factors are : "<<maxFac<<" and is of "<<maxFacNum<<endl;
    return 0;
}
