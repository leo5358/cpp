#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fine
    int a;
    cin>>a;
    a=(a%3==0)? a/3:a/3+1;
    cout<<a<<endl;
}