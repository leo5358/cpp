#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
#define int long long 
using namespace std;
signed check(int a,int b)
{
	if(a==1&&b==1)
	{
		return 1;
	}
	if(b%a==0)
	{
		return 1+check(1,b/a);
	}
	else
	{
		return 1/check(b%2,a);
	}

}

signed main()
{
	fin
	int a,b;
	int f;
	while(cin>>a>>b)
	{
		int k=1;	
		if(check(1,k)==(double)a/b)
		{
			cout<<k<<endl;
			break;
		}
		
		k++;		
	}
}
