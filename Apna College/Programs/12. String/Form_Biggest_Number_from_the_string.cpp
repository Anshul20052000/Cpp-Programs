#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String : ";
    getline(cin, str);
    sort(str.begin(), str.end(), greater<int>());
    cout<<"The Greatest Number which can be Formed : "<<str<<endl;
    return 0;
}
