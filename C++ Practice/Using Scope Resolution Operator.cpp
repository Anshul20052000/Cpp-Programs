#include<iostream>
using namespace std;

int n = 10;

int main()
{
    int n = 20;
    {
        int n = 30;
        {
            int n = 40;
            {
                int n = 50;
                cout<<"Value of N in innerest Block of Code : "<<n<<endl;
                cout<<"Value of Global Variable N : "<< ::n<<endl;
            }
            cout<<"Value of N in inner Block of Code : "<<n<<endl;
            cout<<"Value of Global Variable N : "<< ::n <<endl;
        }
        cout<<"Value of N in Block of Code : "<<n<<endl;
        cout<<"Value of Global Variable N : "<< ::n<<endl;
    }
    cout<<"Value of N in Main() Block of Code : "<<n<<endl;
    cout<<"Value of Global Variable N : "<< ::n<<endl;
    return 0;
}
