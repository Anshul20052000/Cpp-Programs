#include<iostream>
using namespace std;
float volume(float R)
{
    return (3.14*R*R);

}
float volume(float L,float B,float H)
{
    return (L*B*H);
}
int main()
{
    int r,l,b,h;
    float volume(float);
    float volume(float,float,float);
    cout<<"Enter the Radius of the Circle "<<endl;
    cin>>r;
    cout<<"Area of the Circle is "<<volume(r)<<endl;
    cout<<"Enter the Length , Breadth and Height of the Cuboid "<<endl;
    cin>>l>>b>>h;
    cout<<"Volume of the Cuboid is "<<volume(l,b,h)<<endl;
    return 0;
}
