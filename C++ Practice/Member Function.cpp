#include<iostream>
using namespace std;
class member
{
public:
    void Inside_member()
    {
        cout<<"This is Inside Member Function"<<endl;
    }
    void Outside_member();
};
void member::Outside_member()
{
    cout<<"This is Outside of Member Function"<<endl;
}
int main()
{
    member m1;
    m1.Inside_member();
    m1.Outside_member();
    return 0;
}
