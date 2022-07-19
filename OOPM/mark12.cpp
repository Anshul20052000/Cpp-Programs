 #include<iostream>
 using namespace std;
 int f(int &x, int c);
 int main()
 {
     int p=5;
     cout<<f(p,p);
     return 0;
 }
 int f(int &x, int c)
 {
     c = c - 1;
     if (c == 0)
        return 1;
     x = x + 1;
     return (f(x,c) * x);
}
