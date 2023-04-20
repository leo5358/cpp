#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main()
{
    fine 
    int a;
    while(cin>>a)
    {
    vector<long long int>dp(105,-1);
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<105;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[a]<<endl;
    }
}