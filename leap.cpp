#include<bits/stdc++.h>
#define ly ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ly
    int sta,en,sum=0;
    cin>>sta>>en;
    for(sta;sta<=en;sta++)
    {
        if(sta%4==0&&sta%100!=0||sta%400==0)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
}