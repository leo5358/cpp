#include<bits/stdc++.h>
#define ty ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n=0,count=0;
        char farm[n];
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>farm[j];
            
        }
        for(int k=0;k<n;k++)
        {
            if(farm[k]=='.')
            {
                count++;
                k+2;
                if(k>n)
                {
                    break;
                }
            }
        }
        cout<<"Case "<<i+1<<": "<<count<<"\n";
    }
}