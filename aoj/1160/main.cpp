#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int w;
int h;
int grid[55][55];
bool colors[55][55];

void dfs(int ch, int cw, int color) {
    colors[ch][cw] = color;
    for (int dh = -1; dh <= 1; dh++) {
        for (int dw = -1; dw <= 1; dw++) {
            int nh = ch + dh;
            int nw = cw + dw;
            if (nh < 0 || nh >= h || nw < 0 || nw >= w) {
                continue;
            }
            if (grid[nh][nw] == 1 && colors[nh][nw] == 0) {
                dfs(nh, nw, color);
            }
        }
    }
}

int main() {
    while (true) {
        cin >> w >> h;
        if (w == 0 && h == 0) {
            break;
        }
        rep(i, h) {
            rep(j, w) {
                cin >> grid[i][j];
                colors[i][j] = 0;
            }
        }

        int color = 0;
        rep(i, h) {
            rep(j, w) {
                if (grid[i][j] == 1 && colors[i][j] == 0) {
                    color++;
                    dfs(i, j, color);
                }
            }
        }
        cout << color << endl;
    }

    return 0;
}
