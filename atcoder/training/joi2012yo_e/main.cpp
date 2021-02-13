#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int W, H;
    cin >> W >> H;
    vector<vector<int>> grid(H + 2, vector<int>(W + 2, 0));
    rep(i, H) {
        rep(j, W) {
            cin >> grid[i + 1][j + 1];
        }
    }

    int dh[6] = {-1, -1, 0, 0, 1, 1};
    int dw[2][6] = {
        {-1, 0, -1, 1, -1, 0},
        {0, 1, -1, 1, 0, 1}
    };

    queue<pair<int, int>> q;
    q.emplace(0, 0);
    grid[0][0] = 2;
    while (!q.empty()) {
        pair<int, int> p = q.front(); q.pop();
        int ch = p.first;
        int cw = p.second;
        rep(i, 6) {
            int nh = ch + dh[i];
            int nw = cw + dw[ch % 2][i];
            if (nh < 0 || nh >= H + 2 || nw < 0 || nw >= W + 2) {
                continue;
            }
            if (grid[nh][nw] == 0) {
                grid[nh][nw] = 2;
                q.emplace(nh, nw);
            }
        }
    }

    int ans = 0;
    rep(i, H) {
        rep(j, W) {
            if (grid[i + 1][j + 1] != 1) {
                continue;
            }
            rep(k, 6) {
                int nh = i + 1 + dh[k];
                int nw = j + 1 + dw[(i + 1) % 2][k];
                if (nh < 0 || nh >= H + 2 || nw < 0 || nw >= W + 2) {
                    continue;
                }
                if (grid[nh][nw] == 2) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}