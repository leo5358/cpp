#include <bits/stdc++.h>

using namespace std;

unsigned long f(unsigned int num) {

    if (num == 1) return 1;
    if (num == 2) return 2;

    unsigned long fib[num + 1];
    fib[1] = 1;
    fib[2] = 2;

    for (int i = 3; i <= num; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[num];
}

int main() {

    int a;
    while(cin >> a) {
        if (a == 0) {
            break;
        }
        else {
            cout << f(a) << endl;
        }
    }

    return 0;
}
