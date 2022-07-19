#include<iostream>
using namespace std;
class myclass
{
    float r,ar,cir;
public:
    myclass(float);
    void show();
    friend float area_cir(myclass&);
    friend float circum_cir(myclass&);
    ~myclass();
};
myclass::myclass(float rad)
{
    r = rad;
}
void myclass::show()
{
    cout<<"Radius is : "<<r<<endl;
    cout<<"Area is : "<<ar<<endl;
    cout<<"Circumference is "<<cir<<endl;
}
float area_cir(myclass &ob)
{
    ob.ar = 3.1415 * ob.r * ob.r;
    return(ob.ar);
}
float circum_cir(myclass &ob)
{
    ob.cir = 2 * 3.1415 * ob.r;
    return(ob.cir);
}
myclass::~myclass()
{
    cout<<"Destroying Object..."<<endl;
    cout<<"\tRadius : "<<r<<" Area : "<<ar<<" Circumference : "<<cir<<endl;
}
int main()
{
    myclass ob(3.5);
    /*float area,circum;
    area = area_cir(ob);
    circum = circum_cir(ob);*/
    cout<<"Area of the Circle is : "<<area_cir(ob)<<endl;
    cout<<"Circumference of the Circle is : "<<circum_cir(ob)<<endl;
    ob.show();
    return 0;
}
