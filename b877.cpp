#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fine
    int a,b;
    cin>>a>>b;
    cout<<int((a<b)?b-a:100+b-a)<<endl;
}