#include<iostream>
using namespace std;
long flag = 0;
Tower_of_Hanoi(int n,char source_peg,char destination_peg,char auxillary_peg)
{
    if(n == 1)
    {
        cout<<"Move Disk 1 from "<<source_peg<<" Peg to "<<destination_peg<<" Peg"<<endl;
        flag++;
        return 0;
    }
    Tower_of_Hanoi(n-1,source_peg,auxillary_peg,destination_peg);
    cout<<"Move Disk "<<n<<" from "<<source_peg<<" Peg to "<<destination_peg<<" Peg"<<endl;
    flag++;
    Tower_of_Hanoi(n-1,auxillary_peg,destination_peg,source_peg);
}

int main()
{
    int n;
    cout<<"Enter the Number of Disks : ";
    cin>>n;
    char x,y,z;
    cout<<"Enter the Characters by which you wan to Denote the Pegs..."<<endl;
    cout<<"Enter Character for Source Peg : ";
    cin>>x;
    cout<<"Enter Character for Auxillary Peg : ";
    cin>>y;
    cout<<"Enter Character for Destination Peg : ";
    cin>>z;
    Tower_of_Hanoi(n,x,z,y);
    cout<<"\n Total no of Shifting of Disks are : "<<flag<<endl;
    return 0;
}
