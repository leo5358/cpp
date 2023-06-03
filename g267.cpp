#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
struct demon
{
    int pos_x;
    int pos_y;
    int move_x;
    int move_y;
    bool onground=true;
};

int main()
{
    fin
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<bool>>bomb(n,vector<bool>(m));
    vector<demon>dev(k);
    
    for(int i=0;i<k;i++)
    {
        cin>>dev[i].pos_x>>dev[i].pos_y>>dev[i].move_x>>dev[i].move_y;
    }
    int temp=k;
    for(int i=0;i<m;i++)
    {
        bomb[i].assign(n, false);
    }
    for(int i=0;i<k;i++)
    {
        while(dev[i].onground)
        {
            bomb[dev[i].pos_x][dev[i].pos_y]=true;
            dev[i].pos_x+=dev[i].move_x;
            dev[i].pos_y+=dev[i].move_y;
            if(dev[i].pos_x>n ||dev[i].pos_y>m)
            {
                dev[i].onground=false;
                
            }
            if(bomb[dev[i].pos_x][dev[i].pos_y]==true)
            {
                bomb[dev[i].pos_x][dev[i].pos_y]=false;
                dev[i].onground=false;
            }
            if(dev[i].onground==false)
                {
                    temp--;
                }
        }
        if(temp==0)
        {
            break;
        }
    }
    int check=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(bomb[j][i]==true)
            {
                check++;
            }
        }
    }
    cout<<check<<endl;
}



