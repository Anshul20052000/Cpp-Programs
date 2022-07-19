#include<iostream>
using namespace std;
struct nodetype{
int info;
int link;
}node[8];
void Traverse(int start)
{
    int temp=start;
    while(temp!=-1)
    {
        cout<<node[temp].info<<endl;;
        temp=node[temp].link;
    }
}
int main()
{
    int start=3;
    node[3].info=4;
    node[3].link=5;
    node[5].info=3;
    node[5].link=4;
    node[4].info=7;
    node[4].link=0;
    node[0].info=9;
    node[0].link=2;
    node[2].info=8;
    node[2].link=1;
    node[1].info=11;
    node[1].link=7;
    node[7].info=12;
    node[7].link=6;
    node[6].info=100;
    node[6].link=-1;
    Traverse(start);
    return 0;
}
