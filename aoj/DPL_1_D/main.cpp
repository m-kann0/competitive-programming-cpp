#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];

    const ll INF = 1'000'000'000'000'000'000;
    vector<ll> lis(n, INF);
    rep(i, n) {
        ll ok = n - 1;
        ll ng = -1;
        while (abs(ok - ng) > 1) {
            ll mid = (ok + ng) / 2;
            if (lis[mid] >= a[i]) {
                ok = mid;
            } else {
                ng = mid;
            }
        }
        lis[ok] = a[i];
    }

    ll ans = 0;
    rep(i, n) {
        if (lis[i] < INF) {
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}