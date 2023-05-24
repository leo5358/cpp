#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cout.tie(0);cin.tie(0); 
#define float double
using namespace std;
signed main()
{
    fin
    int ppl;
    int gender,age,height,weight;
    double bmr;
    cin>>ppl;
    for(int i=0;i<ppl;i++)
    {
        cin>>gender>>age>>height>>weight;
        if(gender==1)
        {
            bmr=(13.7*weight)+(5.0*height)-(6.8*age)+66;
        }
        else if(gender==0)
        {
            bmr=(9.6*weight)+(1.8*height)-(4.7*age)+655;
        }
        cout<<fixed<<setprecision(2)<<bmr<<"\n";
    }
}