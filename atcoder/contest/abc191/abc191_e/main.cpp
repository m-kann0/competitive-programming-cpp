#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

struct edge { int to, cost; };
typedef pair<int, int> P;

int V;
vector<edge> G[2005];
vector<edge> GR[2005];
int d[2005];

const int INF = 1001001001;

int main() {
    int N, M;
    cin >> N >> M;
    rep(i, M) {
        int A, B, C;
        cin >> A >> B >> C;
        A--; B--;
        G[A].push_back(edge{B, C});
        GR[B].push_back(edge{A, C});
    }

    rep(s, N) {
        priority_queue<P, vector<P>, greater<P>> que;
        rep(i, N) d[i] = INF;
        d[s] = 0;
        que.push(P(0, s));

        while(!que.empty()) {
            P p = que.top(); que.pop();
            int v = p.second;
            if (d[v] < p.first) continue;
            for (int i = 0; i < G[v].size(); i++) {
                edge e = G[v][i];
                if (d[e.to] > d[v] + e.cost) {
                    d[e.to] = d[v] + e.cost;
                    que.push(P(d[e.to], e.to));
                }
            }
        }

        // debug
        // rep(i, N) {
        //     printf("d[%d] = %d, ", i, d[i]);
        // }
        // cout << endl;

        int ans = INF;
        for (edge e : GR[s]) {
            //printf("%d, %d\n", d[e.to], e.cost);
            ans = min(ans, d[e.to] + e.cost);
        }
        if (ans == INF) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}
