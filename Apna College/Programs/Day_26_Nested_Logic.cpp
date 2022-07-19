#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d1, d2, m1, m2, y1, y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(!((d1>=1 && d1<=31) && (d2>=1 && d2<=31) && (m1>=1 && m1<=12) && (m2>=1 && m2<=12) && (y1>=1 && y1<=3000) && (y2>=1 && y2<=3000)))
    {
        exit(1);
    }
    int fine = 0;
    if(y1 < y2)
    {
        fine=0;
    }
    else if(y1 == y2)
    {
        if(m1 < m2)
        {
            fine = 0;
        }
        else if(m1 == m2)
        {
            if(d1 < d2)
            {
                fine = 0;
            }
            else if(d1 == d2)
            {
                fine = 0;
            }
            else
            {
                fine = 15*(d1-d2);
            }
        }
        else 
        {
            fine = 500*(m1-m2);
        }
    }
    else
    {
        fine = 10000;
    }
    cout<<fine<<endl;
    return 0;
}
