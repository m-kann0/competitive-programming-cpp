#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int N, Q;
vector<vector<int>> tree(200005);
ll counter[200005];
ll ans[200005];

void dfs(int i, int score, int parent) {
    ans[i] = score + counter[i];
    for (int j : tree[i]) {
        if (j == parent) {
            continue;
        }
        dfs(j, ans[i], i);
    }
}

int main() {
    cin >> N >> Q;
    rep(i, N - 1) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    rep(i, N) {
        counter[i] = 0;
        ans[i] = 0;
    }

    rep(i, Q) {
        int p, x;
        cin >> p >> x;
        p--;
        counter[p] += x;
    }

    dfs(0, 0, -1);

    rep(i, N) {
        if (i != 0) {
            cout << " ";
        }
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
