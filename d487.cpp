#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int solve(int n)
{
    if(n>0)
    {
        return solve(n-1)*n;
    }
    else
    {
        return 1;
    }
}
int main()
{
    fine
    int a;
    cin>>a;

}