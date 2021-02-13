#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    rep(i, H) cin >> grid[i];

    int white = 0;
    rep(i, H) rep(j, W) {
        if (grid[i][j] == '.') {
            white++;
        }
    }

    const int INF = 1'000'000'000;
    const int dh[4] = {-1, 1, 0, 0};
    const int dw[4] = {0, 0, -1, 1};

    vector<vector<int>> dist(H, vector<int>(W, INF));
    dist[0][0] = 1;
    queue<pair<int, int>> q;
    q.emplace(0, 0);
    while (!q.empty()) {
        auto p = q.front(); q.pop();
        int ch = p.first;
        int cw = p.second;
        rep(i, 4) {
            int nh = ch + dh[i];
            int nw = cw + dw[i];
            if (nh < 0 || nh >= H || nw < 0 || nw >= W) {
                continue;
            }
            if (grid[nh][nw] == '.' && dist[nh][nw] == INF) {
                dist[nh][nw] = dist[ch][cw] + 1;
                q.emplace(nh, nw);
            }
        }
    }

    if (dist[H - 1][W - 1] == INF) {
        cout << -1 << endl;
    } else {
        cout << white - dist[H - 1][W - 1] << endl;
    }

    return 0;
}