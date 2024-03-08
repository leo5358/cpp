#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,b,c,sum=0,now=0;
		cin>>a>>b>>c;
		while(now>=c){
			now = (a+b)/c;
			sum+=now;
		}
		cout<<sum<<endl;
	}
}