#include<iostream>
using namespace std;
int main()
{
    int pocmon = 3000;
    for(int day=1;day<=31;day++)
    {
        if(day%2 == 1)
        {
            continue;
        }
        if(pocmon == 0)
        {
            break;
        }
        cout<<"Go Out Today!...Date : "<<day<<endl;
        pocmon -= 300;
    }
    return 0;
}
