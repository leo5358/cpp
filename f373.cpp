#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fin
    int price,price0,price1;
    cin>>price;
    price0=price-(price/2000)*200;
    price1=price-(price/1000)*100;
    if(price0<price1)
    {
        cout<<price0<<" "<<"0"<<endl;
    }
    else if(price1<price0)
    {
        cout<<price1<<" "<<"1"<<endl;
    }
    else if(price0==price1)
    {
        cout<<price<<" "<<"0"<<endl;
    }
}