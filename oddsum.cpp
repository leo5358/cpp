#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fine
    int i;
    cin>>i;
    int a,b;
    for(int j=1;j<=i;j++)
    {
        int sum=0;
        cin>>a;
        cin>>b;
        for( a;a<=b;a++)
        {
            if(a%2==1)
            {
                sum+=a;
            }
        }
         cout<<"Case "<<j<<": "<<sum<<endl;
    }
}