#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    for(a;a<=b;a++)
    {
        if(a%2==0)
        {
            sum=sum+a;
        }
    }
    cout<<sum<<endl;
}

