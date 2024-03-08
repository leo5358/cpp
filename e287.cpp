#include<iostream>
#include<vector> 
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
#define inf 1e9
using namespace std;
int n,m,total=0;
vector<vector<int>>Map;
bool used[105][105]={0};
int dis[4][2]={{0,-1},{-1,0},{0,1},{1,0}};
bool inrange(int x,int y){
    return x>=0 && x<n && y>=0 && y<m;
}
int dfs(int x,int y){
    total+=Map[x][y];
    used[x][y]=true;
    bool find_next=false;
    int nextx=inf,nexty=inf,min_around=inf;
    for(int i=0;i<4;i++){
        int nx=x+dis[i][0],ny=y+dis[i][1];
        if(inrange(nx,ny) && !used[nx][ny]){
            find_next=true;
            if(min_around > Map[nx][ny]){
                min_around=Map[nx][ny];
                nextx=nx; nexty=ny;
            }
        }
    }
    if(!find_next) return total;
    return dfs(nextx,nexty);
}
int main(){
    fin
    cin>>n>>m;
    for(int i=0;i<n;i++){
        vector<int>tmp;
        for(int j=0;j<m;j++){
            int x; cin>>x;
            tmp.push_back(x);
        }
        Map.push_back(tmp);
    }
    int x=-1,y=-1,min_input=inf;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(min_input > Map[i][j]){
                x=i,y=j;
                min_input=Map[i][j];
            }
        }
    }
    cout<<dfs(x,y)<<"\n";
    return 0;
}