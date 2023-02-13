#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
while(a!=b)
{
cout<<a<<" ";
a=a+c;
}
cout<<b;
}