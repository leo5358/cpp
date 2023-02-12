#include<bits/stdc++.h>
using namespace std;
int main()
{
string str,nstr;
cin>>str;
nstr=str;
std::reverse(str.begin(),str.end());
if(str==nstr)
{
cout<<"yes";
}
else
{
cout<<"no";
}
}