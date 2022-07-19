#include<iostream>
using namespace std;


void func(int r,int c,int arr[10][10])
{
  int i, j;

  for (i=0; i<r; i++)
  {
    for (j=0; j<c; j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

void func_vla(int rows, int cols, int arr[10][10])
{
  int i, j;

  for (i=0; i<rows; i++)
  {
    for (j=0; j<cols; j++)
    {
      arr[i][j] = i*j;
    }
  }
}

int main()
{
  int r,c;
  cin>>r>>c;
  int x[r][c];
  func_vla(r,c,x);
  func(r,c,x);
  return 0;
}
