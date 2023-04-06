#include<bits/stdc++.h>
#define ly ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ly
    string s;
    while(cin>>s){
        cout << s[0] << string(s.size()-2,'_') << s[s.size()-1] << endl;    
    
}
}