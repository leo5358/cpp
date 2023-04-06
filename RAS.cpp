#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fine
    string a,b,c;
    char upperA,upperB,upperC;
    while(cin>>a>>b>>c)
    {
        upperA=toupper(a[0]);
        upperB=toupper(b[0]);
        upperC=toupper(c[0]);
        cout<<upperA<<upperB<<upperC<<" "<<c<<endl;
    }

}