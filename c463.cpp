#include<bits/stdc++.h>
using namespace std;
int n,a,b;
long long ans=0;
vector<vector<int>>v;
unordered_set<int>st;
vector<int>far;
void dfs(int id,int dep){
    if(v[id].size()==0){
        far[id]=dep;
        return;
    }
    for(int i:v[id]){
        dfs(i,dep+1);
        far[id]=max(far[id],far[i]);
    }
    ans+=far[id]-dep;
    return;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    v.assign(n+1,{});
    far.assign(n+1,0);
    for(int i=1;i<=n;i++)st.insert(i);
    for(int i=1;i<=n;i++){
        cin>>a;
        for(a;a>0;a--){
            cin>>b;
            v[i].push_back(b);
            st.erase(b);
        }
    }
    dfs(*st.begin(),0);
    cout<<*st.begin()<<"\n"<<ans;
}