#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll N;
    cin >> N;
    vector<tuple<ll, ll, ll>> v1, v2;
    rep(i, N) {
        ll x, y;
        cin >> x >> y;
        v1.push_back(make_tuple(x, y, i));
        v2.push_back(make_tuple(y, x, i));
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<tuple<ll, ll, ll>> edges;
    for (ll i = 1; i < N; i++) {
        auto [x1, y1, n1] = v1[i - 1];
        auto [x2, y2, n2] = v1[i];
        ll cost = min(abs(x1 - x2), abs(y1 - y2));
        edges.push_back(make_tuple(cost, n1, n2));
    }
    for (ll i = 1; i < N; i++) {
        auto [x1, y1, n1] = v2[i - 1];
        auto [x2, y2, n2] = v2[i];
        ll cost = min(abs(x1 - x2), abs(y1 - y2));
        edges.push_back(make_tuple(cost, n1, n2));
    }
    sort(edges.begin(), edges.end());

    ll ans = 0;
    dsu uf(N);
    for (auto edge : edges) {
        auto [cost, u, v] = edge;
        if (!uf.same(u, v)) {
            ans += cost;
            uf.merge(u, v);
        }
    }
    cout << ans << endl;

    return 0;
}