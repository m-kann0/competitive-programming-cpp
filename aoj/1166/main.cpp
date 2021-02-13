#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

const int INF = 10000;
const int dh[4] = {-1, 1, 0, 0};
const int dw[4] = {0, 0, -1, 1};

void debug(vector<vector<int>> grid) {
    for (auto row : grid) {
        for (auto col : row) {
            cout << col;
        }
        cout << endl;
    }
}

int main() {
    while (true) {
        int w, h;
        cin >> w >> h;
        if (w == 0 && h == 0) {
            break;
        }

        vector<vector<int>> grid(h * 2 - 1, vector<int>(w * 2 - 1, 0));
        rep(i, h) {
            rep(j, w - 1) {
                cin >> grid[i * 2][j * 2 + 1];
                if (i * 2 - 1 >= 0) {
                    grid[i * 2 - 1][j * 2 + 1] = max(grid[i * 2 - 1][j * 2 + 1], grid[i * 2][j * 2 + 1]);
                }
                if (i * 2 + 1 < h * 2 - 1) {
                    grid[i * 2 + 1][j * 2 + 1] = max(grid[i * 2 + 1][j * 2 + 1], grid[i * 2][j * 2 + 1]);
                }
            }
            if (i != h - 1) {
                rep(j, w) {
                    cin >> grid[i * 2 + 1][j * 2];
                    if (j * 2 - 1 >= 0) {
                        grid[i * 2 + 1][j * 2 - 1] = max(grid[i * 2 + 1][j * 2 - 1], grid[i * 2 + 1][j * 2]);
                    }
                    if (j * 2 + 1 < w * 2 - 1) {
                        grid[i * 2 + 1][j * 2 + 1] = max(grid[i * 2 + 1][j * 2 + 1], grid[i * 2 + 1][j * 2]);
                    }
                }
            }
        }
        // debug(grid);

        vector<vector<int>> dist(h * 2 - 1, vector<int>(w * 2 - 1, INF));
        dist[0][0] = 0;
        queue<pair<int, int>> q;
        q.emplace(0, 0);
        while (!q.empty()) {
            pair<int, int> p = q.front(); q.pop();
            int ch = p.first;
            int cw = p.second;
            rep(i, 4) {
                int nh = ch + dh[i];
                int nw = cw + dw[i];
                if (nh < 0 || nh >= h * 2 - 1 || nw < 0 || nw >= w * 2 - 1) {
                    continue;
                }
                if (dist[nh][nw] == INF && grid[nh][nw] == 0) {
                    dist[nh][nw] = dist[ch][cw] + 1;
                    q.emplace(nh, nw);
                }
            }
        }

        int ans = dist[h * 2 - 2][w * 2 - 2];
        if (ans == INF) {
            cout << 0 << endl;
        } else {
            cout << ans / 2 + 1 << endl;
        }
    }

    return 0;
}