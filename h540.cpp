#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
#define int long long
using namespace std;
signed main()
{
    fin
    int time;
    cin>>time;
    for(int i=0;i<time;i++)
    {
        int c,r;
        cin>>r>>c;
        if(r>1)
        {
            cout<<r+c-1<<endl;
        }
        else if(r==1)
        {
            cout<<"1"<<endl;
        }
        else if(r==0)
        {
            cout<<"٩(ˊᗜˋ*)و"<<endl;
        }
    }
}