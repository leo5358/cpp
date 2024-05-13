#include<bits/stdc++.h>
#define ll long long 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
	int i;
	cin>>i;
	while(i--){
		int a,b,c;
		cin>>a>>b>>c;
		unordered_set<int>space;
		for(int j=a+1;j<b;j++){
			if(j%c!=0){
				cout<<j<<" ";
				space.insert(j);
			}
		}
		if(space.size()==0){
			cout<<"No free parking spaces."<<endl;
		}
		
	}
}