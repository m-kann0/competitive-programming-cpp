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
    vector<ll> a(N);
    rep(i, N) cin >> a[i];

    ll mn = 1001;
    ll mx = -1;
    rep(i, N) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    ll ans = mx - mn;
    cout << ans << endl;

    return 0;
}