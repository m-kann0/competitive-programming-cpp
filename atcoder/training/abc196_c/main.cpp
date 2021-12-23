#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define FOR(i, b, e) for (ll i = (ll)(b); i < (ll)(e); ++i)
#define REP(i, n) FOR(i, 0, n)
#define SIZE(container) ((ll) container.size())

int main() {
    ll N;
    cin >> N;

    ll ans = 0;

    FOR(i, 1, 1'000'001) {
        string s = to_string(i) + to_string(i);
        ll x = 0;
        for (char c : s) {
            x *= 10;
            x += c - '0';
        }
        if (x <= N) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
