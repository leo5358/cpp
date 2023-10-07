#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
struct lion{
    int height;
    int weight;
    int product;
};
int main(){
    fin
    int amount;
    int index;
    cin>>amount;
    vector<lion>lions(amount);
    for(int i=0;i<amount;i++){
        cin>>lions[i].height;
    }
    for(int i=0;i<amount;i++){
        cin>>lions[i].weight;
        lions[i].product=lions[i].height*lions[i].weight;
    }
    for(int j=0;j<amount;j++){
        if(lions[index].product>lions[j].product)
        {
            index=j;
        }
    }
    cout<<lions[index].height<<" "<<lions[index].weight<<endl;
}