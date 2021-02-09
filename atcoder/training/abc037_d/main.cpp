#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int H, W;
int grid[1005][1005];
ll memo[1005][1005];

const int MOD = 1000000007;
int dh[4] = {-1, 1, 0, 0};
int dw[4] = {0, 0, -1, 1};

ll dp(int ch, int cw) {
    if (memo[ch][cw] != 0) {
        return memo[ch][cw];
    }

    ll res = 1;
    rep(i, 4) {
        int nh = ch + dh[i];
        int nw = cw + dw[i];
        if (nh < 0 || nh >= H || nw < 0 || nw >= W) {
            continue;
        }
        if (grid[ch][cw] < grid[nh][nw]) {
            res += dp(nh, nw);
            res %= MOD;
        }
    }
    memo[ch][cw] = res;
    return res;
}

int main() {
    cin >> H >> W;
    rep(i, H) {
        rep(j, W) {
            cin >> grid[i][j];
        }
    }

    rep(i, H) {
        rep(j, W) {
            dp(i, j);
        }
    }

    ll ans = 0;
    rep(i, H) {
        rep(j, W) {
            ans += memo[i][j];
            ans %= MOD;
        }
    }

    cout << ans << endl;

    return 0;
}
