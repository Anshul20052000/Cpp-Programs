#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("Country.txt");
    fout<<"United States of America"<<endl;
    fout<<"India"<<endl;
    fout<<"United Kingdom"<<endl;
    fout<<"Srilanka"<<endl;
    fout.close();

    fout.open("Capital.txt");
    fout<<"Washington"<<endl;
    fout<<"Delhi"<<endl;
    fout<<"London"<<endl;
    fout<<"Columbo"<<endl;
    fout.close();

    ifstream fin;
    fin.open("Country.txt");
    const int N = 80;
    char line[N];
    while(fin)
    {
        fin.getline(line,N);
        cout<<line<<endl;
    }
    fin.close();
    fin.open("Capital.txt");
    while(fin)
    {
        fin.getline(line,N);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}
