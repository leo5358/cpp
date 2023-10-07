#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int ans=n;
        int depth=0;
        int temp=0;
        if(n%9==0)
        {
            while(n!=10)
            {
                temp++;
                n=n/10;
            }
            cout<<ans<<"is a multiple of 9 and has 9-degree "<<temp<<"."<<endl;
        }
        else 
        {
            cout<<temp<<"is not a multiple of 9."<<endl;
        }
    }
}