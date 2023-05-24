#include<bits/stdc++.h>
#define ty ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ty
    int a,b;
    int high=0,low=0,base=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        high=0;
        low=0;
        base=0;
        cout<<"Case "<<i+1<<" :";
        cin>>b;
        cin>>base;
        vector<int>wall(b);
        for(int j=1;j<b;j++)
        {
            cin>>wall[j];
        }
        for(int k=1;k<b;k++)
        {
            if(wall[k]>base)
            {
                high++;
            }
            else if(wall[k]<base)
            {
                low++;
            }
            base=wall[k];
        }
        cout<<high<<" "<<low<<"\n";
    }
}