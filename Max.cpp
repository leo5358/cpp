#include<bits/stdc++.h>
using namespace std;
int main()
{int n,a=1,b,c=0;

cin>>n;

while(n--){

cin>>b;

a=max(a,b);

c=max(c,a-b);

}

cout<<c<<"\n";
}