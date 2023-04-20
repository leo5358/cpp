#include<bits/stdc++.h>
#define ty ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    ty
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++)
            {
                cout<<"_";
            }
            for(int j=1;j<=2*i-1;j++)
            {
            cout<<"*";
            }
            for(int j=1;j<=n-i;j++)
            {
            cout<<"_";
            }
        cout<<endl;

        }

    }

}