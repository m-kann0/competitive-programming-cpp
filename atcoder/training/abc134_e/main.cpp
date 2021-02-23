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
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    vector<ll> dp(N, -1);
    rep(i, N) {
        ll ok = N - 1;
        ll ng = -1;
        while (abs(ok - ng) > 1) {
            ll mid = (ok + ng) / 2;
            if (A[i] > dp[mid]) {
                ok = mid;
            } else {
                ng = mid;
            }
        }
        dp[ok] = A[i];
    }

    ll ans = 0;
    rep(i, N) {
        if (dp[i] > -1) {
            ans++;
        } else {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}