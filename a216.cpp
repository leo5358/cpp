#include<bits/stdc++.h>
#define ty ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
long long int fuc(long long int n)
{
    if(n==1)
    {
        return 1;
    }
    else 
    {
        return n+fuc(n-1);
    }
}
long long int gum(long long int m)
{
    if(m==1)
    {
        return 1;
    }
    else 
    {
        return gum(m-1)+fuc(m);
    }
}
int main()
{
    ty
    long long int a;
    while(cin>>a)
    {
        cout<<fuc(a)<<" "<<gum(a)<<endl;
    }
}