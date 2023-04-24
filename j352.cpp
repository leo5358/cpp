#include<bits/stdc++.h>
#define fin ios_bas::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fin
    int weeks;
    int rain,sun,rain_sum=0,sun_sum=0;
    cin>>weeks;
    vector<int>data1(weeks+1,0);
    vector<int>data2(weeks+1,0);
    for(int i=0;i<weeks;i++)
    {
        cin>>data1[i];
    }
    for(int j=0;j<weeks;j++)
    {
        cin>>data2[j];
    }
    cin>>rain>>sun;
    for(int k=0;k<=weeks+1;k++)
    {
        rain_sum+=data1[k];
        sun_sum+=data2[k];
        if(rain_sum>=rain&&sun_sum>=sun)
        {
            cout<<k+2<<endl;
            break;
        }
        if(k>weeks)
        {
            cout<<-1<<endl;
        }
    }
}