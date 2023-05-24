#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fin
    signed sum=0;
    bool check=true;
    vector<int>luck(3);
    vector<int>num(5);
    vector<int>money(5);
    for(int i=0;i<3;i++)
    {
        cin>>luck[i];
    }
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<5;i++)
    {
        cin>>money[i];
    }
    for(int i=0;i<5;i++)
    {
        if(num[i]==luck[0])
        {
            sum+=money[i];
        }
        else if(num[i]==luck[1])
        {
            sum+=money[i];
        }
        else if(num[i]==luck[2])
        {
            sum-=money[i];
            check=false;
        }
    }
    if(check)
    {
        if(sum>0)
        {
            cout<<sum*2;
        }
        else if(sum<0)
        {
            cout<<0;
        }
    }
    else 
    {
        if(sum>0)
        {
            cout<<sum;
        }
        else if(sum<0)
        {
            cout<<0;
        }
    }

}
