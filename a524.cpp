#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
  fin
  int n;
  while(cin>>n)
  {
  	int a[]={1,2,3,4,5,6,7,8};
  	sort (a,a+n);
  	reverse (a,a+n);
  	do
	{
		for(int i=0;i<n;i++)
   		{
   			cout<<a[i];
   		}
   		cout<<endl;
  	}while (prev_permutation(a,a+n));
  }
}