#include<bits/stdc++.h>
#define ly ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ly
    string a,b;
    int leg;
    cin>>a;
    leg=a.length();
    for(leg;leg<=0;leg--)
    {
        for(int i=0;i<leg;i++)
        { 
            b[i]=a[leg];
    }
    if(b[0]==0)
    {
        for(int j=1;j<leg;j++)
        {
            cout<<b[j];
        }
    }
    else 
    {
        for(int k=0;k<leg;k++)
        {
            cout<<b[k];
        }
    }

}
}