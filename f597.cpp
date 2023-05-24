#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fin
    int a,b,output=10e5;
    int amount;
    int input;
    int ina=0,inb=0;
    cin>>a>>b;
    cin>>amount;
    for(int i=0;i<amount;i++)
    {
        
        while(cin>>input)
        {
            if(input==0)
            {
                break;
            }
        
        if(input==a)
        {
            ina++;
        }
        else if(input==-a)
        {
            ina--;
        }
        if(input==b)
        {
            inb++;
        }
        else if(input==-b)
        {
            inb--;
        }
        }
    }
    if(ina>0&&inb>0)
    {
        output=min(ina,inb);
    }
    else if(ina<=0||inb<=0)
    {
        output=0;
    }
    cout<<output<<endl;
}