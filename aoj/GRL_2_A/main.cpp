#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

#include <bits/stdc++.h>
struct union_find {
public:
    union_find(int n) {
        par = std::vector<int>(n);
        for (int i = 0; i < n; i++) {
            par[i] = i;
        }
        rank = std::vector<int>(n, 0);
    }

    int find(int x) {
        if (par[x] == x) {
            return x;
        } else {
            return par[x] = find(par[x]);
        }
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) {
            return;
        }

        if (rank[x] < rank[y]) {
            par[x] = y;
        } else {
            par[y] = x;
            if (rank[x] == rank[y]) {
                rank[x]++;
            }
        }
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }
private:
    std::vector<int> par;
    std::vector<int> rank;
};

int main() {
    ll V, E;
    cin >> V >> E;
    vector<tuple<ll, ll, ll>> edges;
    rep(i, E) {
        ll s, t, w;
        cin >> s >> t >> w;
        edges.push_back(make_tuple(w, s, t));
    }
    sort(edges.begin(), edges.end());

    ll ans = 0;
    union_find uf(V);
    for (auto edge : edges) {
        ll w = get<0>(edge);
        ll s = get<1>(edge);
        ll t = get<2>(edge);
        if (!uf.same(s, t)) {
            ans += w;
            uf.unite(s, t);
        }
    }
    cout << ans << endl;

    return 0;
}