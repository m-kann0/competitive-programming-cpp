#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<string> grid(H);
    rep(i, H) {
        cin >> grid[i];
    }

    vector<pair<int, int>> points(N + 1);
    rep(i, H) {
        rep(j, W) {
            if (grid[i][j] == '.' || grid[i][j] == 'X') {
                continue;
            }
            if (grid[i][j] == 'S') {
                points[0] = make_pair(i, j);
            } else {
                points[grid[i][j] - '0'] = make_pair(i, j);
            }
        }
    }

    const int INF = 1000000000;
    int dh[4] = {-1, 1, 0, 0};
    int dw[4] = {0, 0, -1, 1};

    int ans = 0;
    rep(i, N) {
        int sh = points[i].first;
        int sw = points[i].second;
        int gh = points[i + 1].first;
        int gw = points[i + 1].second;

        vector<vector<int>> dist(H, vector(W, INF));
        dist[sh][sw] = 0;
        queue<pair<int, int>> q;
        q.emplace(sh, sw);

        while (!q.empty()) {
            pair<int, int> p = q.front(); q.pop();
            int ch = p.first;
            int cw = p.second;
            rep(j, 4) {
                int nh = ch + dh[j];
                int nw = cw + dw[j];
                if (nh < 0 || nh >= H || nw < 0 || nw >= W) {
                    continue;
                }
                if (grid[nh][nw] == 'X' || dist[nh][nw] != INF) {
                    continue;
                }
                dist[nh][nw] = dist[ch][cw] + 1;
                q.emplace(nh, nw);
            }
        }

        ans += dist[gh][gw];
    }

    cout << ans << endl;

    return 0;
}
