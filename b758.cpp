#include <bits/stdc++.h>
#define fin                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fin int a, b;
    while (cin >> a >> b)
    {
        a = a + 2;
        b = b + 30;
        while (b >= 60)
        {
            b -= 60;
            a++;
        }
        if (a < 10)
        {
            cout << "0" << a << ":";
        }
        else if (a >= 10 ||a<24)
        {
            cout << a << ":";
        }
        else if(a>=24)
        {
            a-=24;
            if(a<10)
            {
                cout << "0" << a << ":";
            }
            else if(a>=10)
            {
                 cout << a << ":";
            }
        }
        if (b < 10)
        {
            cout << "0" << b;
        }
        else if(b>=10)
        {
            cout<<b;
        }
    }
}