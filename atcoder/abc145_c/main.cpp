#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    rep(i, n) cin >> x[i] >> y[i];

    vector<int> p;
    rep(i, n) p.push_back(i);

    double total = 0.0;
    int count = 0;
    do {
        for (int i = 1; i < n; i++) {
            total += sqrt((x[p[i]] - x[p[i - 1]]) * (x[p[i]] - x[p[i - 1]]) +(y[p[i]] - y[p[i - 1]]) * (y[p[i]] - y[p[i - 1]]));
        }
        count++;
    } while (next_permutation(p.begin(), p.end()));

    printf("%.10f\n", total / count);

    return 0;
}
