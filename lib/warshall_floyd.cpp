#include <bits/stdc++.h>
struct warshall_floyd {
public:
    warshall_floyd(int n) : _n(n) {
        d = std::vector<std::vector<long long>>(_n, std::vector<long long>(_n, INF));
        for (int i = 0; i < _n; i++) {
            d[i][i] = 0;
        }
    }

    void add_edge(int from, int to, long long cost) {
        d[from][to] = std::min(d[from][to], cost);
    }

    void execute() {
        for (int k = 0; k < _n; k++) {
            for (int i = 0; i < _n; i++) {
                for (int j = 0; j < _n; j++) {
                    if (d[i][k] < INF && d[k][j] < INF) {
                        d[i][j] = std::min(d[i][j], d[i][k] + d[k][j]);
                    }
                }
            }
        }
    }

    bool has_negative_cycle() {
        for (int i = 0; i < _n; i++) {
            if (d[i][i] < 0) {
                return true;
            }
        }
        return false;
    }

    bool reachable(int from, int to) {
        if (d[from][to] >= INF) {
            return false;
        } else {
            return true;
        }
    }

    long long shortest_path(int from, int to) {
        return d[from][to];
    }

private:
    const long long INF = 1'000'000'000'000'000'000;
    int _n;
    std::vector<std::vector<long long>> d;
};
