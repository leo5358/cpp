#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fin
    vector<int>num,times(10,0);
    for(int i=0;i<3;i++){
        int x; cin>>x;
        num.push_back(x);
    }
    for(int i:num) times[i]++;
    int ans=0;
    for(int i:times) ans=max(ans,i);
    cout<<ans<<" ";
    set<int,greater<int>>st;
    for(int i:num) st.insert(i);
    for(int i:st) cout<<i<<" ";
    cout<<"\n";
    return 0;
}