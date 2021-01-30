#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

vector<vector<int>> G(100);
int in[100];
int out[100];

int dfs(int t, int u) {
    in[u] = t++;
    for (auto v : G[u]) {
        if (in[v] != 0) {
            continue;
        }
        t = dfs(t, v);
    }
    out[u] = t++;
    return t;
}

int main() {
    int n;
    cin >> n;
    rep(i, n) {
        int u, k;
        cin >> u >> k;
        u--;
        rep(j, k) {
            int v;
            cin >> v;
            v--;
            G[u].push_back(v);
        }
        sort(G[u].begin(), G[u].end());
    }

    int t = 1;
    rep(i, n) {
        if (in[i] == 0) {
            t = dfs(t, i);
        }
    }

    rep(i, n) {
        cout << (i + 1) << " " << in[i] << " " << out[i] << endl;
    }

    return 0;
}
