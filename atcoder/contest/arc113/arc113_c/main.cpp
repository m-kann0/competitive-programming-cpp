#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    string S;
    cin >> S;

    vector<fenwick_tree<ll>> map('z' - 'a' + 1, fenwick_tree<ll>(sizeof(S)));
    rep(i, sizeof(S)) {
        map[S[i] - 'a'].add(i, 1);
    }

    vector<pair<char, ll>> v;
    for (ll i = 1; i < sizeof(S); i++) {
        if (S[i - 1] != S[i]) {
            continue;
        }
        if (v.empty() || v.back().first != S[i]) {
            v.emplace_back(S[i], i);
        }
    }

    // for (P p : v) {
    //     printf("%c:%lld\n", p.first, p.second);
    // }

    reverse(v.begin(), v.end());

    ll ans = 0;
    rep(i, sizeof(v)) {
        if (i == 0) {
            ans += sizeof(S) - (v[i].second + 1) - map[v[i].first - 'a'].sum(v[i].second + 1, sizeof(S));
        } else {
            ans += sizeof(S) - (v[i].second + 1) - map[v[i].first - 'a'].sum(v[i].second + 1, v[i - 1].second - 1);
        }
    }
    cout << ans << endl;

    return 0;
}