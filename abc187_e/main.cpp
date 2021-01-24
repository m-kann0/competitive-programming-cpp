#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> edges;
    vector<vector<int>> graph(n);
    rep(i, n - 1) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        edges.emplace_back(a, b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int parent[n];
    rep(i, n) parent[i] = -1;
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (auto v : graph[u]) {
            if (parent[v] == -1 && v != parent[u]) {
                parent[v] = u;
                q.push(v);
            }
        }
    }

    vector<ll> c(n);
    int Q;
    cin >> Q;
    rep(i, Q) {
        int t, e;
        ll x;
        cin >> t >> e >> x;
        e--;
        int a, b;
        if (t == 1) {
            a = edges[e].first;
            b = edges[e].second;
        } else {
            a = edges[e].second;
            b = edges[e].first;
        }
        if (b == parent[a]) {
            c[a] += x;
        } else {
            c[0] += x;
            c[b] -= x;
        }
    }

    {
        queue<int> q;
        q.push(0);
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (auto v : graph[u]) {
                if (v != parent[u]) {
                    c[v] += c[u];
                    q.push(v);
                }
            }
        }
    }

    rep(i, n) {
        cout << c[i] << endl;
    }

    return 0;
}
