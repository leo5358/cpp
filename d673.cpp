#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fin
    int initial,pro=0,count=0;
    vector<int>problem(12);
    vector<int>contest(12);
    while(cin>>initial)
    {
        if(initial<0)
        {
            break;
        }
        count++;
        cout<<"Case "<<count<<":"<<endl;
        for(int i=0;i<12;i++)
        {
            cin>>problem[i];
        }
        for(int a=0;a<12;a++)
        {
            cin>>contest[a];
        }
        for(int j=0;j<12;j++)
        {
            pro+=(j>0)? problem[j-1]:initial;
            if(contest[j]>pro)
            {
                cout<<"No problem. :("<<"\n";
            }
            else 
            {
                cout<<"No problem! :D"<<"\n";
                pro-=contest[j];
            }
        }
    }
}