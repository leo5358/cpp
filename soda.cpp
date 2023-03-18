#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int solve(int a,int b)
{
    if(a/b>=b)
    {
        return solve(a,b);
    }
    else
    {
        return a/b;
    }
}
int main()
{
    fine
    int n;
    cin>>n;
    int e,f,c,drink,sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>e>>f>>c;
        drink=(e+f);
        sum += solve(drink,c);
    }
    cout<<sum<<endl;
}