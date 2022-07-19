#include<bits/stdc++.h>
#include<vector>
using namespace std;

int Possibility (int N, int M, long long int A[]) {
   // Write your code here
    if(N==2)
    {
        if(A[0]<A[1])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
   int val;
   int new_arr[N-3] = {0};
   for(int i=0; i<N-2; i++)
   {
       for(int j=0;j<i;j++)
       {
           new_arr[j] = A[j];
       }
       val = 0;
       val = A[i] + A[i+1] + A[i+2];
       cout<<val<<endl;
       new_arr[i+1] = val;
       for(int j=i+2; j<N; j++)
       {
           new_arr[j] = A[j];
       }

       for(int k=0;k<N-3;k++)
       {
           cout<<new_arr[k]<<" ";
       }
       cout<<endl;
   }
   
}

/*int Possibility (int N, int M, vector<long long> A)
{
    if(N==2){
        if(A[0]<A[1]){
            return 1;
        }
        else
            return 0;
    }
    while(M>0){
        int i= 0;
        int sum=0;
        while(i<=2 && A.size()>=3){
            int k = A.size()-i-1;
            sum+=A[k];
            A.pop_back();
            i++;
        }
        A.push_back(sum);
        M--;
    }

    for(int i=0;i<A.size()-2;i++){
        if(A[i]>A[i+1]){
            return 0;
        }
    }

    return 1;
}*/
   


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        //vector <long long> A(N);
        long long int A[N];
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = Possibility(N, M, A);
        //cout << out_;
        //cout << "\n";
    }
}