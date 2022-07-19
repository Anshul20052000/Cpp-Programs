#include<iostream>
using namespace std;

int first_occ(int arr[], int n, int i, int key)
{
    if(i == n)
    {
        return -1;
    }
    if(arr[i] == key)
    {
        return i;
    }
    return(first_occ(arr, n, i+1, key));
}

int last_occ(int arr[], int n, int i, int key)
{
    if(i==-1)
    {
        return -1;
    }
    if(arr[i] == key)
    {
        return i;
    }
    return(last_occ(arr, n, i-1, key));
}

int last_occ_1(int arr[], int n, int i, int key)
{
    if(i == n)
    {
        return -1;
    }
    int occ = last_occ_1(arr, n, i+1, key);
    if(occ != -1)
    {
        return occ;
    }
    if(arr[i] == key)
    {
        return i;
    }
    return -1;

}

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"First Occurence : "<<first_occ(arr, 10, 0, 2)<<endl;
    cout<<"Last Occurence : "<<last_occ(arr, 10, 9, 2)<<endl;
    cout<<"Last Occurence : "<<last_occ_1(arr, 10, 0, 2)<<endl;
    return 0;
}