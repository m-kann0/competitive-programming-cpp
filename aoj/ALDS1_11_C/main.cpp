#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> graph(n);
    rep(i, n) {
        int u, k;
        cin >> u >> k;
        u--;
        rep(j, k) {
            int v;
            cin >> v;
            v--;
            graph[u].push_back(v);
        }
    }

    vector<int> dist(n, -1);
    dist[0] = 0;
    deque<int> q;
    q.push_back(0);
    while (!q.empty()) {
        int u = q.front(); q.pop_front();
        for (int v : graph[u]) {
            if (dist[v] != -1) {
                continue;
            }
            dist[v] = dist[u] + 1;
            q.push_back(v);
        }
    }
    rep(i, n) {
        cout << (i + 1) << " " << dist[i] << endl;
    }

    return 0;
}
