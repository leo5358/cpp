#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fin
    int games;
    cin>>games;
    for(int i=0;i<games;i++)
    {
        int a,b;
        cin>>a>>b;
        if((a+b)%2||a<b)
        {
            cout<<"impossible"<<"\n";
        }
        else 
        {
            cout<<(a+b)/2<<" "<<(a-b)/2<<"\n";
        }
    }


}


