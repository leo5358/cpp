#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<int> combine(vector<int>&card1,vector<int>&card2,int amount)
{
    vector<int>card(301);
    for(int i=0;i<amount;i++)
    {
        card[i]=card1[i];
        card[i+1]=card2[i];
    }
    return card;
};
vector<int> wash_card(vector<int>&card,int amount)
{
    vector<int>card1(152);
    vector<int>card2(152);
    for(int  j=0;j<amount;j++)
    {
        for(int k=0;k<amount/2;k++)
        {
            card1[k]=card[k];
        }
        for(int l=amount/2,n=0;l<amount,n<amount/2;l++,n++)
        {
            card2[n]=card[l];
        }
    }
    return combine(card1,card2,amount);
};
int main()
{
    fin
    int amount,wash;
    cin>>amount>>wash;
    vector<int>card(301);
    for(int i=0;i<amount;i++)
    {
        cin>>card[i];
    }
    
    for(int m=0;m<wash;m++)
    {
        card=wash_card(card,amount);
    }
    for(int a=0;a<amount;a++)
    {
        cout<<card[a]<<" ";
    }
}