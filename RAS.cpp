#include<bits/stdc++.h>
#define fine ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fine
    string a;
    string upperA,last;
    while(cin>>a)
    {
        upperA+=(a[0]+65)+" ";
        last=a;
    }
    cout<<upperA<<" "<<last<<endl;
}