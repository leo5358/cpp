#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans;
    cin>>n;
    cin>>i;
    while(cin>>i)
    {
        if(i<3)
        {
            break;
        }
        else if(i>3)
        {
           ans=i%3;
           cout<<ans;
        }
    }
}
