#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

ll N;
ll A[5000];
ll dp[5000][5000];

ll rec(ll l, ll r) {
    if (dp[l][r] != -1) {
        return dp[l][r];
    }

    bool sente = (r - l + 1) % 2 == N % 2;

    if (l == r) {
        if (sente) {
            dp[l][r] = A[l];
        } else {
            dp[l][r] = 0;
        }
        return dp[l][r];
    }

    if (sente) {
        dp[l][r] = max(
            rec(l + 1, r) + A[l],
            rec(l, r - 1) + A[r]
        );
    } else {
        if (A[l] > A[r]) {
            dp[l][r] = rec(l + 1, r);
        } else {
            dp[l][r] = rec(l, r - 1);
        }
    }
    return dp[l][r];
}

int main() {
    cin >> N;
    rep(i, N) {
        cin >> A[i];
        A[N + i] = A[i];
    }
    rep(i, 5000) rep(j, 5000) dp[i][j] = -1;

    ll ans = 0;
    rep(l, N) {
        ll r = l + N - 1;
        ans = max(ans, rec(l, r));
    }
    cout << ans << endl;

    return 0;
}