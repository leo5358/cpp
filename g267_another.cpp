#include <iostream>
#include <vector>

using namespace std;

struct demon {
    int pos_x;
    int pos_y;
    int move_x;
    int move_y;
    bool onground = true;
};

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<bool>> bomb(n, vector<bool>(m, false));
    vector<demon> dev(k);

    for (int i = 0; i < k; i++) {
        cin >> dev[i].pos_x >> dev[i].pos_y >> dev[i].move_x >> dev[i].move_y;
        bomb[dev[i].pos_x][dev[i].pos_y] = true;
    }

    for (int i = 0; i < k; i++) {
        while (dev[i].onground) {
            int new_x = dev[i].pos_x + dev[i].move_x;
            int new_y = dev[i].pos_y + dev[i].move_y;

            if (new_x < 0 || new_x >= n || new_y < 0 || new_y >= m) {
                dev[i].onground = false;
                break;
            }

            if (bomb[new_x][new_y]) {
                bomb[new_x][new_y] = false;
                dev[i].onground = false;
            }

            dev[i].pos_x = new_x;
            dev[i].pos_y = new_y;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (bomb[i][j]) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
