#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,a0=0,a1=0,a2=0;
    cin>>num;
    while(cin>>num){
        if(num%3==0){
            a0++;
        }
        else if(num%3==1){
            a1++;
        }
        else{
            a2++;
        }
    }
    cout<<a0<<" "<<a1<<" "<<a2;
    return 0;
}