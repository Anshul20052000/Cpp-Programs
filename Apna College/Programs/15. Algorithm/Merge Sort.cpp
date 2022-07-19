#include<iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub);

void merge_sort(int arr[], int lb, int ub)
{
    if(lb<ub)
    {
        int mid = (lb + ub)/2;
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid+1, ub);
        merge(arr, lb, mid, ub);
    }
}

void merge(int arr[], int lb, int mid, int ub)
{
    int n1 = mid - lb + 1;
    int n2 = ub - mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i] = arr[lb + i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i=0, j=0, k=lb;
    while(i < n1 && j < n2)
    {
        if(a[i] > b[j])
        {
            arr[k] = b[j];
            j++;
            k++;
        }
        else
        {
            arr[k] = a[i];
            i++;
            k++;
        }
    }
    while(i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr, 0, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}