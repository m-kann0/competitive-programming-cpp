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
    while (true) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }

        double x[n], y[n], z[n], r[n];
        rep(i, n) {
            cin >> x[i] >> y[i] >> z[i] >> r[i];
        }

        union_find uf(n);
        vector<tuple<double, int, int>> edges;
        rep(i, n) {
            rep(j, n) {
                if (i >= j) {
                    continue;
                }
                double dist = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2) + pow(z[i] - z[j], 2));
                double cost = dist - r[i] - r[j];
                if (cost < 0) {
                    cost = 0;
                }
                edges.push_back(make_tuple(cost, i, j));
            }
        }

        sort(edges.begin(), edges.end());

        double ans = 0.0;
        for (auto edge : edges) {
            double cost = get<0>(edge);
            int i = get<1>(edge);
            int j = get<2>(edge);
            if (!uf.same(i, j)) {
                uf.unite(i, j);
                ans += cost;
            }
        }
        printf("%.3f\n", ans);
    }

    return 0;
}