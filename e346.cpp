#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
#define int long long 
using namespace std;
signed main()
{
    fin
    int len;
    int times;
    cin>>len;
    vector<int>stand(len);
    vector<int>sum(200000);
    for(int i=0;i<len;i++)
    {
        cin>>stand[i];
    }
    cin>>times;
    for(int i=0;i<times;i++)
    {
        int a,b;
        cin>>a>>b;        
        for(int j=a-1;j<b;j++)
        {
            sum[j+1]=sum[j]+stand[j+1];
        }
        cout<<sum[b-1]<<endl;
    }
}