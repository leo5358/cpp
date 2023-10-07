#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a==1){
		cout<<b+c<<endl;
	}
	else if(a==2){
		cout<<b-c<<endl;
	}
	else if(a==3){
		cout<<b*c<<endl;
	}
	else if(a==4){
		cout<<b/c<<endl;
	}
}
}
