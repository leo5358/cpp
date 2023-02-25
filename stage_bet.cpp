#include <iostream>
using namespace std;
int f(int n)
{
    if(n==0)
        return 1;
    else
        return f(n-1)*n;
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a<b)
            cout<<0<<endl;
        else
            cout<<f(a)/f(b)/f(a-b)<<endl;
    }
    return 0;
}

 