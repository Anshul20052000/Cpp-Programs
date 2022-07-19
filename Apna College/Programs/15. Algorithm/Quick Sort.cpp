   #include<iostream>
   using namespace std;

   int partition(int arr[], int lb, int ub);

   void quick_sort(int arr[], int lb, int ub)
   {
       if(lb < ub)
       {
           int pi = partition(arr, lb, ub);
           quick_sort(arr, lb, pi-1);
           quick_sort(arr, pi+1, ub);
       }
   }

   int partition(int arr[], int lb, int ub)
   {
       int pivot = arr[ub];
       int i = lb-1;
       for(int j=lb;j<ub;j++)
       {
           if(arr[j] < pivot)
           {
               i++;
               swap(arr[i], arr[j]);
           }
       }
       swap(arr[i+1], arr[ub]);
       return (i+1);
   }

   int main()
   {
       int n;
       cin>>n;
       int arr[n];
       for(int i = 0; i < n; i++)
       {
           cin>>arr[i];
       }
       quick_sort(arr, 0, n-1);
       for(int i=0;i<n;i++)
       {
           cout<<arr[i]<<" ";
       }
       return 0;
   }