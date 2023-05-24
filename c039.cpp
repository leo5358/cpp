#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int judge(int i,int count)
{
    while(i!=1) 
    {   
        count++;
        if(i%2==0)
        {
            return judge(i/2,count); 
        }
        else if(i%2==1)
        {
            return judge(i*3+1,count);
        }
    }
    return count;
}
int main()
{
    fin
    int a,j;
    while(cin>>a>>j)
    {
        int count=0;
        cout<<a<<" "<<j<<" ";
        if(a>j)
        {
            swap(a,j);
        }
        for(int i=a;i<=j;i++)
        {
            count=max(judge(i,0),count);
        }   
        cout<<count+1<<"\n";
    }
}