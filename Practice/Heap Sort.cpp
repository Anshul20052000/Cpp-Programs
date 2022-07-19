#include<iostream>
using namespace std;
void Heapify(int arr[],int n,int i);
void Swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void Heap_Sort(int arr[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        Heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        Swap(&arr[0],&arr[i]);
        Heapify(arr,i,0);
    }
}
void Heapify(int arr[],int n,int i)
{
    int largest = i;
    int left = (2*i)+1;
    int right = (2*i)+2;
    if((left<n)&&(arr[left]>arr[largest]))
    {
        largest = left;
    }
    if((right<n)&&(arr[right]>arr[largest]))
    {
        largest = right;
    }
    if(largest!=i)
    {
        Swap(&arr[i],&arr[largest]);
        Heapify(arr,n,largest);
    }
}
int main()
{
    int ar[100],n;
    cout<<"\t\t HEAP SORT "<<endl;
    cout<<"Enter the Length of the Array(<100) : ";
    cin>>n;
    cout<<"Enter the values in the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Ar["<<i<<"] = ";
        cin>>ar[i];
    }
    cout<<endl;
    cout<<"The Array you Entered is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    cout<<"Now Applying Heap Sort Algorithm..."<<endl;
    Heap_Sort(ar,n);
    cout<<endl;
    cout<<"Now the Sorted Array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}
