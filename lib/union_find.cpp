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
