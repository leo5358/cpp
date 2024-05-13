#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long 
#pragma GCC optimize("Ofast")

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>dp(51);
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=51;i++){
		dp[i]=dp[i-1]*2+dp[i-2];
	}
	cout<<dp[n+1]<<endl;
}