#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int n,k,dar[10005],sea[10005];
int bs(int target)
{
    int L=-1,R=n;
    while(R-L>1){
        int M=(L+R)/2;
        if(dar[M]==target) return M;
        if(dar[M]>target) R=M;
        else L=M;
    }
    return -1;
}
int main()
{
    fin
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>dar[i];
    }
    for(int j=0;j<k;j++)
    {
        cin>>sea[k];
        cout<<bs(sea[k])+1<<endl;;
    }

}

