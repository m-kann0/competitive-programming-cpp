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

    set<ll> s;
    for (ll a = 2; a * a <= N; a++) {
        ll x = a * a;
        while (x <= N) {
            s.insert(x);
            x *= a;
        }
    }

    ll ans = N - sizeof(s);
    cout << ans << endl;

    return 0;
}