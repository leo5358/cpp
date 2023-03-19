// #include<bits/stdc++.h>
// #define fine ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// using namespace std;
// int main()
// {   
//     fine
//     int n,a;
//     cin<<n;
//     a=n[6]*100+n[7]*10+n[6];




// }





#include <iostream>
using namespace std;

int main()
{
    int i, j, a, n = 0, s = -1, m;
    int b[9]={0};
    cin >> a;
    while (a > 0) {
        b[n] = a % 10;
        a = a / 10;
        n++;
    }
    s = b[0] + b[1] * 10 + b[2] * 100;
    for (i=0;i<2;i++) {
        m = -1;
        for (j=0;j<n;j++)
            if (b[j] > b[m])
                m = j;
        s = s - b[m] * b[m];
        b[m] = 0;
    }
    if (s == 0)
        cout << "Good Morning!";
    else
        cout << "SPY!";
}

 