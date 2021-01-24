#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> e(m);
    rep(i, m) {
        int a, b;
        cin >> a;
        cin >> b;
        a--; b--;
        e.emplace_back(a, b);
    }

    reverse(e.begin(), e.end());

    vector<ll> result;
    dsu d(n);
    ll ans = ((ll) n) * (n - 1) / 2;
    rep(i, m) {
        result.push_back(ans);
        int a = e[i].first;
        int b = e[i].second;
        if (!d.same(a, b)) {
            ans -= ((ll) d.size(a)) * ((ll) d.size(b));
            d.merge(a, b);
        }
    }

    reverse(result.begin(), result.end());

    rep(i, m) {
        cout << result[i] << endl;
    }

    return 0;
}
