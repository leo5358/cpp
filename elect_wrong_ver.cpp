#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
fine 
long long int a,b,c;
while(cin>>a>>b>>c)
{
 if(a>b&&a>c)
   {
    if(b>c){
        cout<<"B"<<endl;
    }
    else{
        cout<<"C"<<endl;
    }
   }
 else if(b>c&&b>a)
   {
    if(a>c){
        cout<<"A"<<endl;
    }
   else{
        cout<<"C"<<endl;
   }
   }
 else if(c>a&&c>b){
    if(a>b){
        cout<<"A"<<endl;
    }
    else{
        cout<<"B"<<endl;
    }
   }
}
}

