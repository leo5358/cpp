#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fine 
    int i;
    cin>>i;
    if(i<=5)
    {
        cout<<"0"<<endl;
    }
    else if (i<=11&&i>=6)
    {
        cout<<"590"<<endl;
    }
    else if (i>=12&&i<=17)
    {
        cout<<"790"<<endl;
    }
    else if(i<=59&&i>=18)
    {
        cout<<"890"<<endl;
    }
    else if(i>=60)
    {
        cout<<"399"<<endl;
    }
}