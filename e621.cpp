#include <bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    int n;
    int a,b,c;
    bool space;
    cin>>n;
    for(auto i=0;i<n;i++){
        space=false;
        cin>>a>>b>>c;
        for(auto j=a+1;j<b;j++){
            if(j%c==0){
                continue;
            }
            else{
                cout<<j<<" ";
                space=true;
            }
        }
        if(space=false){
            cout<<"No free parking spaces."<<endl;
        }
    }
}