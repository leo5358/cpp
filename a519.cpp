#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long 
using namespace std;
vector<int>dp;

int f(int n){
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}

unsigned main(){
	int n;
	dp[0]=1;
	dp[1]=1;
	while(cin>>n){
		cout<<f(n)<<endl;
	}

}