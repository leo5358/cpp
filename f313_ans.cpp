
//C++ language
 
#include<iostream>
#include<vector> //vector 
#include<cstring> //memset() 
using namespace std;
int R,C,K,m;
vector<vector<int>>Map;
int var[55][55]={0};
int dir[4][2]={{0,-1},{-1,0},{0,1},{1,0}};
bool inrange(int x,int y){
    return x>=0 and x<R and y>=0 and y<C;
}
void move_out(int x,int y){
    int out_population=Map[x][y]/K;
    for(int i=0;i<4;i++){
        int nx=x+dir[i][0],ny=y+dir[i][1];
        if(inrange(nx,ny) and Map[nx][ny]!=-1){
            var[nx][ny]+=out_population;
            var[x][y]-=out_population;
        }
    }
}
int main(){
    cin>>R>>C>>K>>m;
    for(int i=0;i<R;i++){
        vector<int>tmp;
        for(int j=0;j<C;j++){
            int x; cin>>x;
            tmp.push_back(x);
        }
        Map.push_back(tmp);
    }
    for(int i=0;i<m;i++){
        memset(var,0,sizeof(var));
        for(int j=0;j<R;j++)
            for(int k=0;k<C;k++)
                if(Map[j][k]!=-1)
                    move_out(j,k);
        for(int j=0;j<R;j++)
            for(int k=0;k<C;k++)
                Map[j][k]+=var[j][k];
    }
    int max_peo=0,min_peo=1e9;
    for(vector<int>i:Map){
        for(int j:i){
            if(j==-1) continue;
            max_peo=max(max_peo,j);
            min_peo=min(min_peo,j);
        }
    }
    cout<<min_peo<<"\n"<<max_peo<<"\n";
    return 0;
}