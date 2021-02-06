#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int dfs(int depth, int v[], int n, int abc[], int l[]) {
    if (depth == n) {
        vector<vector<int>> ls(4);
        rep(i, n) {
            ls[v[i]].push_back(l[i]);
        }
        if (ls[0].empty() || ls[1].empty() || ls[2].empty()) {
            return 1000000000;
        }
        int ans = 0;
        rep(i, 3) {
            ans += (ls[i].size() - 1) * 10;
            int tot = 0;
            for (auto x : ls[i]) {
                tot += x;
            }
            ans += abs(abc[i] - tot);
        }
        return ans;
    }
    int ans = 1000000000;
    rep(i, 4) {
        v[depth] = i;
        int now = dfs(depth + 1, v, n, abc, l);
        ans = min(ans, now);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int abc[3];
    cin >> abc[0] >> abc[1] >> abc[2];
    int l[n];
    rep(i, n) cin >> l[i];

    int v[n];
    int ans = dfs(0, v, n, abc, l);
    cout << ans << endl;

    return 0;
}
