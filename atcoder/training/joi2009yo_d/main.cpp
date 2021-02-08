#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int m, n;
int grid[100][100];

int di[4] = {-1, 1, 0, 0};
int dj[4] = {0, 0, -1, 1};

int dfs(int ci, int cj) {
    grid[ci][cj] = 0;
    int mx = 0;
    rep(i, 4) {
        int ni = ci + di[i];
        int nj = cj + dj[i];
        if (ni < 0 || ni >= n || nj < 0 || nj >= m) {
            continue;
        }
        if (grid[ni][nj] == 0) {
            continue;
        }
        mx = max(mx, dfs(ni, nj));
    }
    grid[ci][cj] = 1;
    return mx + 1;
}

int main() {
    cin >> m >> n;
    rep(i, n) {
        rep(j, m) {
            cin >> grid[i][j];
        }
    }

    int ans = 0;
    rep(i, n) {
        rep(j, m) {
            if (grid[i][j] == 0) {
                continue;
            }
            ans = max(ans, dfs(i, j));
        }
    }

    cout << ans << endl;

    return 0;
}
