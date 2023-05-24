#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    fin
    long long int amount,gi=0,sum=0;
    cin>>amount;
    vector<int>board(amount);
    vector<int>gift(amount+2);
    for(int i=0;i<amount;i++)
    {
        cin>>board[i];
    }
    for(int j=1;j<amount;j++)
    {
        cin>>gift[j];
    }
    gift[0]=0;
    sort(board.begin(),board.end());
    reverse(board.begin(),board.end());
    for(int i=0;i<amount;i++)
    {
        gi+=gift[i];
        sum+=gi*board[i];
    }
    cout<<sum<<endl;
}