#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    fin
    int x,n;
    int food;
    int right=0,left=0;
    int cur_big=0,cur_small=10000;
    cin>>x>>n;
    for(auto i=0;i<n;i++){
        cin>>food;
        if(x>food){
            left++;
            if(food<cur_small){
                cur_small=food;
            }
        }
        else if(x<food){
            right++;
            if(food>cur_big){
                cur_big=food;
            }
        }
    }
    if(left>right){
        cout<<left<<" "<<cur_small<<endl;
    }
    else{
        cout<<right<<" "<<cur_big<<endl;
    }
}