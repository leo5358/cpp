#include<iostream>
#include<vector> 
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
vector<int> friends;
vector<bool> visited;
void find(int cur){
    visited[cur]=true;
    while(!visited[friends[cur]]){
        cur=friends[cur];
        visited[cur]=true;
    }
}
int main(){
    fin
    int N; cin>>N;
    friends.resize(N);
    visited.assign(N,false);
    for(int &i:friends) cin>>i;
    int ans=0;
    for(int i=0;i<N;i++){
        if(!visited[i]){
            find(i);
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}