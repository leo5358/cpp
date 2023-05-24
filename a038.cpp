#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);ccout.tie(0);
using namespace std;
int main()
{
    string a;
    cin>>a;
    reverse(a.begin(),a.end());
    stringstream ss(a);
    int b;
    ss>>b;
    cout<<b<<endl;
}