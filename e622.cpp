#include <bits/stdc++.h>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

struct pet {
    int CP;
    short IV;
    int aftergrowth;
};

int main() {
    fin
    int amount;
    int dust;
    int current = -1; 
    int maxi = -1;    

    cin >> amount >> dust;
    vector<pet> pets(amount);

    for (int i = 0; i < amount; i++) {
        cin >> pets[i].CP >> pets[i].IV;

        if (pets[i].IV <= 29) {
            pets[i].aftergrowth = pets[i].CP + (dust / 1000 * 10);
        } else if (pets[i].IV >= 30 && pets[i].IV <= 39) {
            pets[i].aftergrowth = pets[i].CP + (dust / 1000 * 50);
        } else {
            pets[i].aftergrowth = pets[i].CP + (dust / 1000 * 100);
        }

        if (pets[i].aftergrowth > maxi) {
            current = i;
            maxi = pets[i].aftergrowth;
        }
    }

    cout << current + 1 << " " << pets[current].aftergrowth << endl;

    return 0;
}
