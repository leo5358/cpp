#include<bits/stdc++.h>
using namespace std;
int f91(int a)
{
    if(a<=100)
    {
        return f91(f91(a+11));
    }
    else if (a>=101)
    {
        return a-10;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    while(cin>>n)
    {
     if(n==0)
     {
        break;
     }
     cout<<"f91"<<"("<<n<<")"<<" = "<<f91(n)<<endl;
    }
}