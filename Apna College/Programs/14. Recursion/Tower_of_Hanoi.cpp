#include<iostream>
using namespace std;

void Tower_of_Hanoi(int n, char src, char help, char dest)
{
    if(n==0)
    {
        return ;
    }
    Tower_of_Hanoi(n-1, src, dest, help);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    Tower_of_Hanoi(n-1, help, src, dest);
}

int main()
{
    Tower_of_Hanoi(3, 'A', 'B', 'C');
    return 0;
}