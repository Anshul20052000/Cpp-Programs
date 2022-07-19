#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream poo("Sample.dat");
    cout<<"Enter Item Name : ";
    char name[20];
    cin>>name;
    cout<<"Enter Item Cost : ";
    float cost;
    cin>>cost;
    poo<<name<<"\t"<<cost <<endl;
    poo.close();
    ifstream npoo("Sample.dat");
    npoo>>name;
    npoo>>cost;
    cout<<endl;
    cout<<"Item Name : "<<name<<endl;
    cout<<"Item Cost : "<<cost<<endl;
    npoo.close();
    return 0;
}
