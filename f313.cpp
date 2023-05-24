#include<bits/stdc++.h>
#define fin ios::sync_wiht_stdio(0);cin.tie(0);
using namespace std;
int move(int a,int k)
{
    int move=0;
    move=a/k;
    return move;
}
int main()
{
    int minn=10e5,maxn=INT_MIN;
    int moving=0;
    int r,c,k,m;
    cin>>r>>c>>k>>m;
    vector<vector<int>>city(c,vector<int>(r));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>city[j][i];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int b=0;b<r;b++)
        {
            for(int a=0;a<c;a++)
            {
                if(city[a][b]!=0)
                {
                    moving=move(city[a][b],k);
                    city[a][b]-=moving;
                }
            }
        }

    }
    for(int b=0;b<r;b++)
    {
        for(int a=0;a<c;a++)
        {
            minn=min(city[a][b],minn);
            maxn=max(city[a][b],maxn);
        }
    }
    cout<<minn<<"\n"<<maxn;
}