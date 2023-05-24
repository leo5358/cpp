#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fin
    int result=0,n,Y=0,N=0;
    cin>>n;
    string a;
    while(getline(cin,a))
    {
        for(char c : a)
        {
            if(c=='Y')
            {
                Y+=1;
            }
            else if(c=='N')
            {
                N+=1;
            }
        }
    }
    if(Y==N)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}