#include<bits/stdc++.h>
using namespace std;
int Max(int a,int b,int c)
{
    if(a > b && a > c){
        return a;
    }
    else if(b > a && b>c){
        return b;
    }
    else if(c > a && c > b){
        return c;
    }
};
int main(){
    int amount;
    int sum=0;
    int card[amount];
    cin>>amount;
    for(int i=0;i<amount;i++)
    {
        cin>>card[i];
    }
    for(int i=0;i<amount;i++)
    {
        sum+=Max(card[i-1],card[i],card[i+1]);
    }
    cout<<sum<<endl;
}


