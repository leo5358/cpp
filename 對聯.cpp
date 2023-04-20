#include<bits/stdc++.h>
#define ly ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    ly
    vector<int>m(7);
    vector<int>n(7);
    int times;
    cin>>times;
    for(int i=0;i<times;i++)
    {
        string result;
        int check=0;
        for(int j=0;j<7;j++)
        {
            cin>>m[j];
        }
        for(int k=0;k<7;k++)
        {
            cin>>n[k];
        }
        if(m[1]==m[3]||m[1]!=m[5]||n[1]==n[3]||n[1]!=n[5])
        {
            result+="A";
            check++;
        }
        if(m[6]!=1||n[6]!=0)
        {
            result+="B";
            check++;
        }
        if(m[1]==n[1]||m[3]==n[3]||m[5]==n[5])
        {
            result+="C";
            check++;
        }
        if(check==0) 
        {
            cout<<"None"<<endl;
        }
        cout<<result<<endl;
    }
    
}