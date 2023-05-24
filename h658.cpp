#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fin
    int result[2];
    vector<int>pos(2);
    int amount,temp=10e7;
    for(int a=0;a<2;a++)
    {
        cin>>pos[a];
    }
    cin>>amount;
    for(int l=0;l<amount;l++)
    {
        int a,b;
        cin>>a>>b;
        int bi=pow(pos[0]-a,2)+pow(pos[1]-b,2);
        if(temp>bi)
        {
            temp=bi;
            result[0]=a;
            result[1]=b;
        }
    }
    cout<<result[0]<<" "<<result[1]<<endl;
}