#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

 main()
{
    fine
    int h,w,count=0,goal;
    bool checkpoint=false;
    char land='0';
    cin>>w>>h;
    cin>>goal;
    vector<vector<char>>map(w,vector<char>(h));
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            cin>>map[i][j];
        }
    }
    for(int k=0;k<w;k++)
    {
        for(int m=0;m<h;m++)
        {
            if(map[k][m]!=land)
            {
                count++;
                
            }
            if(goal<count&&map[k][m]!=land)
            {
                cout<<k<<" "<<m<<"\n";
                checkpoint=true;
            }
            
        }
        
    }
    if(checkpoint==0)
        {
            cout<<"Mission fail."<<endl;
        }
    
}