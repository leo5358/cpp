#include<bits/stdc++.h>
#define int long long
using namespace std;

int main()
{
int n,c;
cin>>n;
for(int i=0;i<=n;i++)
{
c=pow(2,i);
cout<<"2^"<<i<<" = "<<c<<"\n";
}
}