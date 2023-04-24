#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int lucky(vector<int>score,int amount)
{
    int ans=120;
    for(int i=0;i<amount;i++)
    {
        if(score[i]>=60)
        {
            ans=min(ans,score[i]);
        }
    }
    return ans;
};
int badluck(vector<int>score,int amount)
{
    int ans=0;
    for(int j=0;j<amount;j++)
    {
        if(score[j]<60)
        {
            ans=max(ans,score[j]);
        }
    }
    return ans;
};
int main()
{
    fin
    int count_under=0;
    int count_above=0;
    int amount;
    cin>>amount;
    vector<int>score(amount);
    for(int i=0;i<amount;i++)
    {
        cin>>score[i];
    }
    sort(score.begin(),score.end());
    for(int j=0;j<amount;j++)
    {
        if(score[j]>=60)
        {
            count_above++;
        }
        else 
        {
            count_under++;
        }
       cout<<score[j]<<" ";
    }
    cout<<"\n";
    if(count_under==amount)
    {
        cout<<badluck(score,amount);
        cout<<"\n"<<"worst case"<<endl;
    }
    else if(count_above==amount)
    {
        cout<<"best case"<<endl;
        cout<<lucky(score,amount);
    }
    else 
    {
        cout<<badluck(score,amount)<<"\n";
        cout<<lucky(score,amount)<<"\n";
    }
}




