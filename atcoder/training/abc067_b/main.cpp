#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> l(N);
    rep(i, N) cin >> l[i];
    sort(l.rbegin(), l.rend());

    ll ans = 0;
    rep(i, K) ans += l[i];
    cout << ans << endl;

    return 0;
}