#include<bits/stdc++.h>
#define fin ios_base::sync_with_stdio(0);
using namespace std;
int main(){
    fin
    int n;
    int a,b;
    int current_highest=-200,fatal_error=0;        
    int time=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b>current_highest){
            current_highest=b;
            time=a;
        }
        if(b==-1){
            fatal_error++;
        }
    }
    if(current_highest-n-(fatal_error*2)>0){
        cout<<current_highest-n-(fatal_error*2)<<" "<<time<<endl;
    }
    else{
        cout<<0<<" "<<time<<endl;
    }
}