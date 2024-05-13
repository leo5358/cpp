#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int f(int n){
	vector<int>dp;
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<n+5;i++){
		dp[i]=dp[i-1]*2+dp[i-2];
	}
	return dp[n];
}
int main(){
	int n;
	int ans;
	
	while(cin>>n){
		ans=f(n+2);
		cout<<ans<<endl;
	}
}