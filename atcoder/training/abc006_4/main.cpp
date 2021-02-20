#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll N;
    cin >> N;
    ll c[N];
    rep(i, N) cin >> c[i];

    const ll INF = 1'000'000'000'000'000'000;
    vector<ll> dp(N, INF);
    rep(i, N) {
        ll ok = N - 1;
        ll ng = -1;
        while (abs(ok - ng) > 1) {
            ll mid = (ok + ng) / 2;
            if (dp[mid] > c[i]) {
                ok = mid;
            } else {
                ng = mid;
            }
        }
        dp[ok] = c[i];
    }

    ll ans = N;
    rep(i, N) {
        if (dp[i] < INF) {
            ans--;
        }
    }
    cout << ans << endl;

    return 0;
}