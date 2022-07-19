#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("Book.txt");
    char title[20];
    float price;
    cout<<"Enter the Title of the Book : ";
    cin>>title;
    cout<<"Enter the Price of the Book : ";
    cin>>price;
    fout<<title<<"\t"<<price<<endl;
    fout.close();
    ifstream fin("Book.txt");
    fin>>title;
    fin>>price;
    cout<<endl;
    cout<<"Title of the Book : "<<title<<endl;
    cout<<"Price of the Book : "<<price<<endl;
    fin.close();
    return 0;
}
