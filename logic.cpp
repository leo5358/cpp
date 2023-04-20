#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() {
  fine
  int a,b,c,i = 1;
  cin>>a>>b>>c;
  bool and1 = a&&b;
  bool or1 = a||b;  
  bool xor1 = (a!=0)^(b!=0);
  if(and1== c) {
    cout<<"AND"<<endl;   
    i = 0;
  }
  if(or1== c ) {
    cout<<"OR"<<endl;
    i = 0;
  }

  if(xor1== c) {
    cout<<"XOR"<<endl;
    i = 0;
  }
  if(i){
    cout<<"IMPOSSIBLE\n";
  }
}