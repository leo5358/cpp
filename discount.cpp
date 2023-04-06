#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fine
    string id;
    int count=0;
    getline(cin, id);
    for (char c : id) {
    if (c == '8') {
      count++;
    }
  }
    cout<<id<<" can get "<<count*10<<"% "<<"off."<<endl;
}


