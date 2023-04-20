#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fine
    int n,m,count=0;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
        {
            break;
        }
        count++;
        cout<<"Field #"<<count<<":\n";
        char map[n+2][m+2];
        int out_map[n][m];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>map[i][j];
            }
        }
        for(int k=1;k<=n;k++)
        {
            for(int f=1;f<=m;f++)
            {
                out_map[k-1][f-1]=0;
                if(map[k][f]=='*')
                {
                    out_map[k-1][f-1]='*';
                }
                if(map[k-1][f-1]=='*')
                {
                    out_map[k-1][f-1]++;
                }
                if(map[k][f-1]=='*')
                {
                    out_map[k-1][f-1]++;
                }
                if(map[k+1][f-1]=='*')
                {
                    out_map[k-1][f-1]++;
                }
                if(map[k-1][f]=='*')
                {
                    out_map[k-1][f-1]++;
                }
                if(map[k+1][f]=='*')
                {
                    out_map[k-1][f-1]++;
                }
                if(map[k-1][f+1]=='*')
                {
                    out_map[k-1][f-1]++;
                }
                if(map[k][f+1]=='*')
                {
                    out_map[k-1][f-1]++;
                }
                if(map[k+1][f+1]=='*')
                {
                    out_map[k-1][f-1]++;
                }
            
            }
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(out_map[i][j]<8)
                {   
                    cout<<int(out_map[i][j]);
                }
                
                else
                {
                    cout<<'*';
                }
            }
            cout<<'\n';
        }
        
  cout<<'\n'; 
}
}