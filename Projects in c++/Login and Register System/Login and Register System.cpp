#include<iostream>
#include<fstream>
#include<string>
using namespace std;

bool Is_Logged_In()
{
    string username,password,un,pw;

    cout<<" Enter USERNAME : ";
    cin>>username;
    cout<<" Enter PASSWORD : ";
    cin>>password;

    ifstream fin;
    fin.open(username + ".txt");
    getline(fin,un);
    getline(fin,pw);
    fin.close();

    if(un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;
    cout<<" 1. Login "<<endl;
    cout<<" 2. Register "<<endl;
    cin>>choice;

    if(choice == 1)
    {
        bool status = Is_Logged_In();

        if(status == true)
        {
            cout<<"Successfully Logged In...!"<<endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout<<"Login Failed...!"<<endl;
            cout<<"No such Account Found"<<endl;
            system("PAUSE");
            return 0;
        }
    }
    else if(choice == 2)
    {
        string username,password;

        cout<<" Select a USERNAME : ";
        cin>>username;
        cout<<" Select a PASSWORD : ";
        cin>>password;

        ofstream fout;
        fout.open(username + ".txt");
        fout<<username<<endl<<password<<endl;
        fout.close();

        cout<<"Now you are a Registered User..."<<endl;
        main();

    }
}
