#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try{
        if(S.length()>=1 && S.length()<=6)
        {
            bool flag = true;
            for(int i=0;i<S.length();i++)
            {
                if(!((islower(S[i])) || isdigit(S[i])))
                {
                    flag = false;
                }
            }
            if(flag)
            {
                cout<<stoi(S)<<endl;       
            }
        }
    }
    catch(exception e){
        cout<<"Bad String"<<endl;
    }
    return 0;
}
