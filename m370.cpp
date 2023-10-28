#include<bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    fin
    int init_pos;
    int food_amount;
    int right=0;
    int left=0;
    cin>>init_pos>>food_amount;
    vector<int>food_pos(food_amount);
    for(auto i=0;i<food_amount;i++){
        cin>>food_pos[i];
    }
    sort(food_pos.begin(),food_pos.end());
    for(auto j=0;j<food_amount;j++){
        if(food_pos[j]>init_pos){
            right++;
        }
        else {
            left++;
        }
    }
    if(left>right){
        cout<<left<<" "<<food_pos[0]<<endl;
    }
    else{
        cout<<right<<" "<<food_pos[food_amount-1]<<endl;
    }
}