#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fin
    int times;
    cin>>times;
    int a,b,c;
    for(int i=0;i<times;i++)
    {
        cin>>a>>b>>c;
        if(a<=20&&b<=20&&c<=20)
        {
            cout<<"Case "<<i+1<<": good"<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": bad"<<endl;
        }
    }
}