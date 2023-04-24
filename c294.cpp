#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fin
    vector<int>leng(3);
    for(int i=0;i<3;i++)
    {
        cin>>leng[i];
    }   
    sort(leng.begin(),leng.end());
    for(int j=0;j<3;j++)
    {
        cout<<leng[j]<<" ";
    }
    cout<<'\n';
    if(leng[0]+leng[1]<=leng[2])
    {
        cout<<"No"<<endl;
    }
    else if(pow(leng[0],2)+pow(leng[1],2)>pow(leng[2],2))
    {
        cout<<"Acute"<<endl;
    }
    else if(pow(leng[0],2)+pow(leng[1],2)==pow(leng[2],2))
    {
        cout<<"Right"<<endl;
    }
    else if(pow(leng[0],2)+pow(leng[1],2)<pow(leng[2],2))
    {
        cout<<"Obtuse"<<endl;
    }
}