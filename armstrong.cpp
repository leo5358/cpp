#include<bits/stdc++.h>
#define ty ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
bool insrm(int a)
{
    int count=0,temp=a,ans=0;
    while(temp)
    {
        count++;
        temp/=10;
    }
    temp=a;
    while(temp){
        ans+=pow(temp%10,count);
        temp/=10;
    }
    if(ans==a)
    {
        return true;
    }
    return false;
}
int main()
{
    ty
    int a,b;
    bool checkpoint=false;
    cin>>a>>b;
    for(a;a<=b;a++)
    {
        if(insrm(a))
        {
            cout<<a<<" ";
            checkpoint=true;
        }
    }
    if(checkpoint==0)
    {
        cout<<"none";
    }
}