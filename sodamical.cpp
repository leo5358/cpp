
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,e,f,c,sum,colas;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>e>>f>>c;
            sum=0;
            colas = e+f;
            while(colas/c){
                sum += colas/c;
                colas =colas/c+colas%c;
            }

            cout<<sum<<endl;
        }
    }
}