#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,scr=0;
    for(int i=0;i<=4;i++)
    {
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        scr=scr+1;
    }
    }
    cout<<scr;
}