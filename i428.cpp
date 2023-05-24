#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    fin
    int n;
    cin>>n;
    int min_n=200,max_n=-200;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    for(int i=1;i<n;i++){
        int dis=abs(v[i].first-v[i-1].first) + abs(v[i].second-v[i-1].second);
        min_n=min(min_n,dis);
        max_n=max(max_n,dis);
    }
    cout<<max_n<<" "<<min_n<<"\n";
    return 0;
}