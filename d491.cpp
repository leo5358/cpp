#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fine
int a,b,sum=0;
cin>>a>>b;
if(a>b)
{
    swap(a,b);
}
for(int i=a;i<=b;i++)
{
    if(i%2==0)
    {
        sum+=i;
    }
}
cout<<sum<<endl;
}