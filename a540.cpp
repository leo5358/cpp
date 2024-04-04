#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
	fin
	int n;
	while(cin>>n){
		int temp;
		int ans=0;
		vector<int>dp(n);
		vector<int>matrix(n+1);
		for(int i=0;i<n;i++){
			cin>>temp;
			matrix.push_back(temp);
		}
		dp[0]=matrix[0];
		for(int j=1;j<n;j++){
			dp[j]=max(dp[j-1]+matrix[j],matrix[j]);
		}
		for(int k=0;k<n-1;k++){
			ans=max(dp[k],dp[k+1]);
		}
		if(ans>0){
			cout<<"The maximum winning streak is"<<" "<<ans<<endl;
		}
		else{
			cout<<"Losing streak."<<endl;
		}
	}
}