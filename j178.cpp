#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fin
    int ene,abi;
    cin>>ene>>abi;
    vector<int>enem(ene);
    for(int l=0;l<ene;l++)
    {
        cin>>enem[l];
    }
    sort(enem.begin(),enem.end());
    for(int i=0;i<ene;i++)
    {
        if(abi>enem[i])
        {
            abi+=enem[i];
        } 
    }
    cout<<abi<<endl;
}
