#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fine
    int a,cost=0;
    cin>>a;
    int fence[a];
    for(int i=0;i<a;i++)
    {
        cin>>fence[i];
    }
    for(int j=0;j<a;j++)
    {
        if(fence[j]==0)
        {
            if(j==0)
            {
                cost+=fence[j+1];
            }
            else if(fence[j-1]>fence[j+1])
            {
                cost+=fence[j+1];
            }
            else if(fence[j-1]<=fence[j+1])
            {
                cost+=fence[j-1];
            }
            else if(j==a-1)
            {
                cost+=fence[a-2];
            }
        }
    }

    cout<<cost<<endl;
}